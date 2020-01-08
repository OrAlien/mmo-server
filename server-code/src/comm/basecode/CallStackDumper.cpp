#include "CallStackDumper.h"
#include "BaseCode.h"
#include "loging_manager.h"
#include <dlfcn.h>
#include <cxxabi.h>
#include <cstring>
#include <memory>


namespace
{
	// The prefix used for mangled symbols, per the Itanium C++ ABI:  
	// http://www.codesourcery.com/cxx-abi/abi.html#mangling  
	const char kMangledSymbolPrefix[] = "_Z";
	// Characters that can be used for symbols, generated by Ruby:  
	// (('a'..'z').to_a+('A'..'Z').to_a+('0'..'9').to_a + ['_']).join  
	const char kSymbolCharacters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_";
	// Demangles C++ symbols in the given text. Example:  
	// "out/Debug/base_unittests(_ZN10StackTraceC1Ev+0x20) [0x817778c]"  
	// =>  
	// "out/Debug/base_unittests(StackTrace::StackTrace()+0x20) [0x817778c]"  
	std::string DemangleSymbol(const char* input_symbol)
	{
		std::string symbol = input_symbol;
		std::string::size_type search_from = 0;
		while (search_from < symbol.size())
		{
			// Look for the start of a mangled symbol from search_from  
			std::string::size_type mangled_start = symbol.find(kMangledSymbolPrefix, search_from);
			if (mangled_start == std::string::npos)
			{
				break; // Mangled symbol not found  
			}
			// Look for the end of the mangled symbol  
			std::string::size_type mangled_end = symbol.find_first_not_of(kSymbolCharacters, mangled_start);
			if (mangled_end == std::string::npos)
			{
				mangled_end = symbol.size();
			}
			std::string mangled_symbol = symbol.substr(mangled_start, mangled_end - mangled_start);
			// Try to demangle the mangled symbol candidate  
			int status = -4; // some arbitrary value to eliminate the compiler warning  
			std::unique_ptr<char, void(*)(void*)> demangled_symbol(abi::__cxa_demangle(mangled_symbol.c_str(), nullptr, 0, &status), std::free);
			// 0 Demangling is success  
			if (0 == status)
			{
				// Remove the mangled symbol  
				symbol.erase(mangled_start, mangled_end - mangled_start);
				// Insert the demangled symbol  
				symbol.insert(mangled_start, demangled_symbol.get());
				// Next time, we will start right after the demangled symbol  
				search_from = mangled_start + std::strlen(demangled_symbol.get());
			}
			else
			{
				// Failed to demangle. Retry after the "_Z" we just found  
				search_from = mangled_start + 2;
			}
		}

		return symbol;
	}

}


#include <bfd.h>

struct line_data {
    asymbol **symbol_table;     /* Symbol table.  */
    bfd_vma addr;
    std::string filename;
    std::string function_name;
    unsigned int line;
    int line_found;
};

void process_section(bfd *abfd, asection *section, void *_data)
{
    line_data *data = (line_data*)_data;
    if (data->line_found) {
        // If we already found the line, exit
        return;
    }
    if ((bfd_get_section_flags(abfd, section) & SEC_ALLOC) == 0) {
        return;
    }

    bfd_vma section_vma = bfd_get_section_vma(abfd, section);
    if (data->addr < section_vma) {
        // If the addr lies above the section, exit
        return;
    }

    bfd_size_type section_size = bfd_section_size(abfd, section);
    if (data->addr >= section_vma + section_size) {
        // If the addr lies below the section, exit
        return;
    }

    // Calculate the correct offset of our line in the section
    bfd_vma offset = data->addr - section_vma - 1;

    // Finds the line corresponding to the offset

    const char *filename=NULL, *function_name=NULL;
    data->line_found = bfd_find_nearest_line(abfd, section, data->symbol_table,
        offset, &filename, &function_name, &data->line);

    if (filename == NULL)
        data->filename = "";
    else
        data->filename = filename;

    if (function_name == NULL)
        data->function_name = "";
    else
        data->function_name = function_name;
}


/* Loads the symbol table into 'data->symbol_table'.  */
int load_symbol_table(bfd *abfd, line_data *data)
{
    if ((bfd_get_file_flags(abfd) & HAS_SYMS) == 0)
        // If we don't have any symbols, return
        return 0;

    void **symbol_table_ptr = reinterpret_cast<void **>(&data->symbol_table);
    long n_symbols;
    unsigned int symbol_size;
    n_symbols = bfd_read_minisymbols(abfd, false, symbol_table_ptr, &symbol_size);
    if (n_symbols == 0) {
        // If the bfd_read_minisymbols() already allocated the table, we need
        // to free it first:
        if (data->symbol_table != NULL)
            free(data->symbol_table);
        // dynamic
        n_symbols = bfd_read_minisymbols(abfd, true, symbol_table_ptr, &symbol_size);
    }

    if (n_symbols < 0) {
        // bfd_read_minisymbols() failed
        return 1;
    }

    return 0;
}



std::string addr2str(const std::string& file_name, size_t addr)
{
	bfd *abfd;
    abfd = bfd_openr(file_name.c_str(), NULL);
    if (abfd == NULL)
        return "Cannot open the binary file '" + file_name + "'\n";
    if (bfd_check_format(abfd, bfd_archive))
        return "Cannot get addresses from the archive '" + file_name + "'\n";
    char **matching;
    if (!bfd_check_format_matches(abfd, bfd_object, &matching))
        return "Unknown format of the binary file '" + file_name + "'\n";
    line_data data;
    data.addr = addr;
    data.symbol_table = NULL;
    data.line_found = false;
    // This allocates the symbol_table:
    if (load_symbol_table(abfd, &data) == 1)
        return "Failed to load the symbol table from '" + file_name + "'\n";
    // Loops over all sections and try to find the line
    bfd_map_over_sections(abfd, process_section, &data);
    // Deallocates the symbol table
    if (data.symbol_table != NULL) free(data.symbol_table);
    bfd_close(abfd);

	if(data.line_found)
		return data.filename + ":" + std::to_string(data.line);
	else
		return "Failed to load the symbol table from '" + file_name + "'\n";
}



std::string GetStackTraceString(const CallFrameMap& data)
{
	std::string result;
	Dl_info dlinfo;
	time_t t = _TimeGetSecond();
	char mbstr[100];
    if (std::strftime(mbstr, sizeof(mbstr), "%A %c", std::localtime(&t)))
	{
       result += mbstr;
    }
	result += "=============================================================\n";
	for(const auto& pair_v : data.m_Addr)
	{
		//尝试输出基址差
		if(dladdr(pair_v.first, &dlinfo) != 0)
		{
			std::string symbol = DemangleSymbol(pair_v.second.c_str());
			size_t addr = (size_t)(pair_v.first) - (size_t)(dlinfo.dli_fbase);
			if((size_t)dlinfo.dli_fbase == 0x400000)
				addr = (size_t)(pair_v.first);
			char buff[2048];
			fmt::format_to_n(buff, 2048, "TRACE:{}\n \033[44;37m{}[{:X}]\033[0m \n", addr2str(dlinfo.dli_fname, addr).c_str(), symbol.c_str(), addr);
			result += buff;
			
		}
		else
		{
			std::string symbol = DemangleSymbol(pair_v.second.c_str());
			char buff[2048];
			fmt::format_to_n(buff,2048, "TRACE:{}\n", symbol.c_str());
			result += buff;
		}
	}
	return result;
}



std::string GetStackTraceString(const CALLFRAME_NODE* pFrame)
{
	std::string result;
	Dl_info dlinfo;
	time_t t = _TimeGetSecond();
	char mbstr[100];
    if (std::strftime(mbstr, sizeof(mbstr), "%A %c", std::localtime(&t)))
	{
       result += mbstr;
    }
	result += "=============================================================\n";
	while(pFrame->m_pParent != nullptr)
	{
		//尝试输出基址差
		const char** funcnamearry = (const char**)backtrace_symbols (&pFrame->m_pCallFunc, 1);
		if(dladdr(pFrame->m_pCallFunc, &dlinfo) != 0)
		{
			std::string symbol = DemangleSymbol(*funcnamearry);
			size_t addr = (size_t)(pFrame->m_pCallFunc) - (size_t)(dlinfo.dli_fbase);
			if((size_t)dlinfo.dli_fbase == 0x400000)
				addr = (size_t)(pFrame->m_pCallFunc);
			char buff[2048];
			fmt::format_to_n(buff,2048, "TRACE:{}\n \033[44;37m{}[{:X}]\033[0m \n", addr2str(dlinfo.dli_fname, addr).c_str(), symbol.c_str(), addr);
			result += buff;
			
		}
		else
		{
			std::string symbol = DemangleSymbol(*funcnamearry);
			char buff[2048];
			fmt::format_to_n(buff, 2048, "TRACE:{}\n", symbol.c_str());
			result += buff;
		}
		free(funcnamearry);
		pFrame = pFrame->m_pParent;
	}
	return result;
}


bool DumpStack(const CALLFRAME_NODE* pFrame)
{
	BaseCode::MyLogMsg("log/trace", "{}", GetStackTraceString(pFrame).c_str());
	return true;
}

bool DumpStack(const CallFrameMap& data)
{
	BaseCode::MyLogMsg("log/trace", "{}", GetStackTraceString(data).c_str());
	return true;
}

bool DumpStackFile(const CallFrameMap& data)
{
	FILE* pFile = fopen("hangup.log", "a+");
	std::string txt = GetStackTraceString(data);
	fwrite(txt.c_str(), txt.size(), 1, pFile);
	fclose(pFile);
	return true;
}






CallFrameMap::CallFrameMap(int skip_calldepth)
{
	static const int MAX_BACKTRACE_SYMBOLS_NUMBER = 100;
	void * pCallFramearray[MAX_BACKTRACE_SYMBOLS_NUMBER];
	size_t nTrace = backtrace(pCallFramearray, MAX_BACKTRACE_SYMBOLS_NUMBER);
	char** funcnamearry = backtrace_symbols(pCallFramearray, nTrace);
	if(funcnamearry == NULL)
		return;

	for(size_t i = skip_calldepth+1; i < nTrace; i++)
	{
		m_Addr.emplace_back( std::make_pair( pCallFramearray[i], std::string(funcnamearry[i]) ) );
	}
	free(funcnamearry);
}



CALLFRAME_NODE::CALLFRAME_NODE(CALLFRAME_NODE* pParent /*= NULL*/, void* p /*= NULL*/):m_pParent(pParent), m_pCallFunc(p), m_bClear(false)
{

}

CALLFRAME_NODE::~CALLFRAME_NODE()
{
	m_bClear = true;
	if(m_pParent)
		m_pParent->remove(this);

	for(CHILD_CALLFRAME_NODE::iterator it = m_setChild.begin();
		it != m_setChild.end(); it++)
	{
		CALLFRAME_NODE* pNode = *it;
		delete pNode;
	}
	m_setChild.clear();
}

CALLFRAME_NODE* CALLFRAME_NODE::append(void* p)
{
	CHILD_CALLFRAME_NODE::iterator it =
		std::find_if(m_setChild.begin(), m_setChild.end(), Equal(p));
	if(it != m_setChild.end())
	{
		return *it;
	}
	else
	{
		CALLFRAME_NODE* pFrame = new CALLFRAME_NODE(this, p);
		m_setChild.push_back(pFrame);
		return pFrame;
	}
}

void CALLFRAME_NODE::remove(CALLFRAME_NODE* pChild)
{
	if(m_bClear)
		return;
	CHILD_CALLFRAME_NODE::iterator it = std::find(m_setChild.begin(), m_setChild.end(), pChild);
	if(it != m_setChild.end())
	{
		m_setChild.erase(it);
	}
}

CALLFRAME_NODE* CALLFRAME_NODE::MakeCallFrame(int skip_calldepth)
{
	static const int MAX_BACKTRACE_SYMBOLS_NUMBER = 100;
	void * pCallFramearray[MAX_BACKTRACE_SYMBOLS_NUMBER];
	size_t nTrace = backtrace(pCallFramearray, MAX_BACKTRACE_SYMBOLS_NUMBER);
	CALLFRAME_NODE* pFrame = this;
	for(size_t i = skip_calldepth + 1; i < nTrace; i++)
	{
		pFrame = pFrame->append(pCallFramearray[i]);
	}
	return pFrame;
}


CALLFRAME_NODE::Equal::Equal(void* p):m_pFunc(p)
{

}

bool CALLFRAME_NODE::Equal::operator()(CALLFRAME_NODE* const rht) const
{
	return m_pFunc == rht->m_pCallFunc;
}