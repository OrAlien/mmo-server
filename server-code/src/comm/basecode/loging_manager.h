#ifndef LOGING_MANAGER_H
#define LOGING_MANAGER_H

#include <iostream>

#include "BaseType.h"
#include "fmt/format.h"
#include "log4z.h"

struct NDC
{
	std::string ndc;
};

namespace BaseCode
{

void MyLogMsgX(const char* pszName, const char* pszBuffer);

template<typename... Args>
void MyLogMsg(const char* pszName, const char* fmt, const Args&... args)
{
	MyLogMsgX(pszName, fmt::format(fmt, args...).c_str());
}

template<typename... Args>
void PrintfError(const char* fmt, const Args&... args)
{
	std::cerr << fmt::format(fmt, args...) << std::endl;
}
} // namespace BaseCode

namespace BaseCode
{
void InitLog(const std::string& path);
void InitMonitorLog(const std::string& logname);
void SetNdc(const std::string& name);
NDC* getNdc();
void StopLog();

extern int				s_default_logger;
extern int				s_debug_logger;
extern int				s_error_logger;
extern int				s_message_logger;
extern int				s_warning_logger;
extern int				s_fatal_logger;
extern int				s_network_logger;
extern int				s_db_logger;
extern int				s_stack_logger;
extern int				s_lua_logger;
extern thread_local int s_monitor_logger;
extern int				s_ai_logger;
extern int				s_login_logger;
extern int				s_gm_logger;
} // namespace BaseCode

#ifdef DEBUG

#define LOGDEBUG(...)	 ZLOGFMT_DEBUG(BaseCode::s_debug_logger, ##__VA_ARGS__)
#define LOGASSERT(...)	 ZLOGFMT_DEBUG(BaseCode::s_debug_logger, ##__VA_ARGS__)
#define LOGNETDEBUG(...) ZLOGFMT_DEBUG(BaseCode::s_network_logger, ##__VA_ARGS__)
#define LOGAIDEBUG(c, ...)                                   \
	if(c)                                                    \
	{                                                        \
		ZLOGFMT_DEBUG(BaseCode::s_ai_logger, ##__VA_ARGS__); \
	}
#define LOGSKILLDEBUG(c, ...)                                   \
	if(c)                                                       \
	{                                                           \
		ZLOGFMT_DEBUG(BaseCode::s_debug_logger, ##__VA_ARGS__); \
	}
#define LOGDBDEBUG(...) ZLOGFMT_DEBUG(BaseCode::s_db_logger, ##__VA_ARGS__)

#else

#define LOGDEBUG(...)
#define LOGASSERT(...)	 ZLOGFMT_ERROR(BaseCode::s_debug_logger, ##__VA_ARGS__)
#define LOGNETDEBUG(...) ZLOGFMT_DEBUG(BaseCode::s_network_logger, ##__VA_ARGS__)
#define LOGAIDEBUG(c, ...)
#define LOGSKILLDEBUG(c, ...)
#define LOGDBDEBUG(...)

#endif

#define LOGNETERROR(...) ZLOGFMT_ERROR(BaseCode::s_network_logger, ##__VA_ARGS__)

#define LOGDBERROR(...) ZLOGFMT_ERROR(BaseCode::s_db_logger, ##__VA_ARGS__)
#define LOGDBFATAL(...) ZLOGFMT_FATAL(BaseCode::s_db_logger, ##__VA_ARGS__)

#define LOGSTACK(...) ZLOGFMT_ERROR(BaseCode::s_stack_logger, ##__VA_ARGS__)

#define LOGMESSAGE(...) ZLOGFMT_INFO(BaseCode::s_message_logger, ##__VA_ARGS__)

#define LOGMESSAGE_NOFMT(msg) ZLOG_INFO(BaseCode::s_message_logger, msg)

#define LOGWARNING(...)	 ZLOGFMT_WARN(BaseCode::s_warning_logger, ##__VA_ARGS__)
#define LOGERROR(...)	 ZLOGFMT_ERROR(BaseCode::s_error_logger, ##__VA_ARGS__)
#define LOGFATAL(...)	 ZLOGFMT_FATAL(BaseCode::s_fatal_logger, ##__VA_ARGS__)
#define LOGLUA(...)		 ZLOGFMT_ERROR(BaseCode::s_lua_logger, ##__VA_ARGS__)
#define LOGLUAERROR(...) ZLOGFMT_ERROR(BaseCode::s_lua_logger, ##__VA_ARGS__)
#define LOGLUADEBUG(...) ZLOGFMT_DEBUG(BaseCode::s_lua_logger, ##__VA_ARGS__)
#define LOGMONITOR(...)	 ZLOGFMT_INFO(BaseCode::s_monitor_logger, ##__VA_ARGS__)
#define LOGLOGIN(...)	 ZLOGFMT_INFO(BaseCode::s_login_logger, ##__VA_ARGS__)
#define LOGGM(...)		 ZLOGFMT_INFO(BaseCode::s_gm_logger, ##__VA_ARGS__)

//#define LOGASSERT(...)		BaseCode::MyLogMsg("log/assert", ##__VA_ARGS__)
//#define LOGNETDEBUG(...)    BaseCode::MyLogMsg("log/netdebug", ##__VA_ARGS__)
//#define LOGAIDEBUG(...)    BaseCode::MyLogMsg("log/aidebug", ##__VA_ARGS__)
//
//#define LOGNETERROR(...)	BaseCode::MyLogMsg("log/neterror", ##__VA_ARGS__)
//
//
//#define LOGDBERROR(...)		BaseCode::MyLogMsg("log/dberror", ##__VA_ARGS__)
//#define LOGDBFATAL(...)		BaseCode::MyLogMsg("log/dbfatal", ##__VA_ARGS__)
//
//#define LOGSTACK(...)		BaseCode::MyLogMsg("log/stack", ##__VA_ARGS__)
//
//#define LOGDEBUG(...)		BaseCode::MyLogMsg("log/debug", ##__VA_ARGS__)
//#define LOGMESSAGE(...)		BaseCode::MyLogMsg("log/message", ##__VA_ARGS__)
//#define LOGWARNING(...)		BaseCode::MyLogMsg("log/warning", ##__VA_ARGS__)
//#define LOGERROR(...)		BaseCode::MyLogMsg("log/error", ##__VA_ARGS__)
//#define LOGFATAL(...)		BaseCode::MyLogMsg("log/fatal", ##__VA_ARGS__)
//#define LOGLUA(...)			BaseCode::MyLogMsg("log/lua", ##__VA_ARGS__)
//#define LOGLUAERROR(...)	BaseCode::MyLogMsg("log/luaerror", ##__VA_ARGS__)
//#define LOGLUADEBUG(...)	BaseCode::MyLogMsg("log/luadebug", ##__VA_ARGS__)
//#define LOGMONITOR(...)		BaseCode::MyLogMsg("log/monitor", ##__VA_ARGS__)

#endif /* LOGING_MANAGER_H */
