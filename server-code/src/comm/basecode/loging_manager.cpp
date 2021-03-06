#include "loging_manager.h"

#include <fmt/format.h>
#include <fmt/printf.h>
#include <fmt/chrono.h>
#include <xlnt/styles/format.hpp>

#include "Thread.h"



namespace BaseCode
{
int				 s_default_logger = LOG4Z_MAIN_LOGGER_ID;
int				 s_network_logger = LOG4Z_MAIN_LOGGER_ID;
int				 s_db_logger	  = LOG4Z_MAIN_LOGGER_ID;
int				 s_stack_logger	  = LOG4Z_MAIN_LOGGER_ID;
int				 s_debug_logger	  = LOG4Z_MAIN_LOGGER_ID;
int				 s_error_logger	  = LOG4Z_MAIN_LOGGER_ID;
int				 s_message_logger = LOG4Z_MAIN_LOGGER_ID;
int				 s_warning_logger = LOG4Z_MAIN_LOGGER_ID;
int				 s_fatal_logger	  = LOG4Z_MAIN_LOGGER_ID;
int				 s_lua_logger	  = LOG4Z_MAIN_LOGGER_ID;
thread_local int s_monitor_logger = LOG4Z_MAIN_LOGGER_ID;
int				 s_ai_logger	  = LOG4Z_MAIN_LOGGER_ID;
int				 s_login_logger	  = LOG4Z_MAIN_LOGGER_ID;
int				 s_gm_logger	  = LOG4Z_MAIN_LOGGER_ID;
} // namespace BaseCode

static std::string g_logPath;

void BaseCode::InitMonitorLog(const std::string& logname)
{
	using namespace zsummer::log4z;
	BaseCode::s_monitor_logger = ILog4zManager::getRef().createLogger(logname.c_str());
	if(g_logPath.empty() == false)
	{
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_monitor_logger, (g_logPath + "/monitor/").c_str());
	}
	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_monitor_logger, false);
	ILog4zManager::getRef().setLoggerFileLine(BaseCode::s_monitor_logger, false);
	ILog4zManager::getRef().setLoggerLimitsize(BaseCode::s_monitor_logger, 50);
}

void BaseCode::MyLogMsgX(const char* pszName, const char* pszBuffer)
{
	if(!pszName || !pszBuffer)
		return;
	auto		curTime		= std::chrono::system_clock::now();
	std::time_t now_c		= std::chrono::system_clock::to_time_t(curTime);
	auto		localtime_c = std::localtime(&now_c);	
	if(localtime_c == nullptr)
		return;

	std::string szLogName = fmt::format("{}_{:%Y-%m-%d}.log", pszName, *localtime_c);

	FILE* fp = fopen(szLogName.c_str(), "a+");
	if(nullptr == fp)
		return;

	fmt::print(fp, "{:%H-%M-%S} [{:d}] {:s}\n", *localtime_c, getpid(), pszBuffer);

	fclose(fp);
}

void BaseCode::InitLog(const std::string& path)
{
	using namespace zsummer::log4z;
	BaseCode::s_debug_logger   = ILog4zManager::getRef().createLogger("debug");
	BaseCode::s_error_logger   = ILog4zManager::getRef().createLogger("error");
	BaseCode::s_message_logger = ILog4zManager::getRef().createLogger("message");
	BaseCode::s_warning_logger = ILog4zManager::getRef().createLogger("warning");
	BaseCode::s_fatal_logger   = ILog4zManager::getRef().createLogger("fatal");

	BaseCode::s_network_logger = ILog4zManager::getRef().createLogger("network");
	BaseCode::s_db_logger	   = ILog4zManager::getRef().createLogger("db");
	BaseCode::s_stack_logger   = ILog4zManager::getRef().createLogger("stack");
	BaseCode::s_lua_logger	   = ILog4zManager::getRef().createLogger("lua");
	BaseCode::s_ai_logger	   = ILog4zManager::getRef().createLogger("ai");
	BaseCode::s_login_logger   = ILog4zManager::getRef().createLogger("login");
	BaseCode::s_gm_logger	   = ILog4zManager::getRef().createLogger("gm");

	ILog4zManager::getRef().enableLogger(LOG4Z_MAIN_LOGGER_ID, false);
	ILog4zManager::getRef().setLoggerDisplay(LOG4Z_MAIN_LOGGER_ID, false);
	ILog4zManager::getRef().setLoggerOutFile(LOG4Z_MAIN_LOGGER_ID, false);
	if(path.empty() == false)
	{
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_default_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_debug_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_error_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_message_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_warning_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_fatal_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_network_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_db_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_stack_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_lua_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_ai_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_login_logger, path.c_str());
		ILog4zManager::getRef().setLoggerPath(BaseCode::s_gm_logger, path.c_str());
		g_logPath = path;
	}

	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_debug_logger, false);
	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_error_logger, false);
	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_message_logger, false);
	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_warning_logger, false);
	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_fatal_logger, false);

	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_network_logger, false);
	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_db_logger, false);
	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_stack_logger, false);
	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_lua_logger, false);
	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_ai_logger, false);
	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_login_logger, false);
	ILog4zManager::getRef().setLoggerDisplay(BaseCode::s_gm_logger, false);

	ILog4zManager::getRef().setLoggerFileLine(BaseCode::s_lua_logger, false);
	ILog4zManager::getRef().setLoggerFileLine(BaseCode::s_gm_logger, false);

	ILog4zManager::getRef().start();
}

void BaseCode::StopLog()
{
	using namespace zsummer::log4z;

	ILog4zManager::getRef().stop();
}

static thread_local NDC* this_thread_NDC = nullptr;
void BaseCode::SetNdc(const std::string& name)
{
	if(this_thread_NDC == nullptr)
	{
		this_thread_NDC = new NDC{name};
	}
	else
	{
		if(name.empty())
		{
			SAFE_DELETE(this_thread_NDC);;
		}
		else
		{
			this_thread_NDC->ndc = name;
		}
	}
}

NDC* BaseCode::getNdc()
{
	return this_thread_NDC;
}