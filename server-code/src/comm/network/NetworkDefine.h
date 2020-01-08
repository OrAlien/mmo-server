#ifndef NetworkDefine_h__
#define NetworkDefine_h__

#include "BaseType.h"
#include <atomic>
#include "export_lua.h"

const int _MAX_MSGSIZE = 1024 * 4;

export_lua enum SERVICE_TYPE
{
	SOCKET_SERVICE	= 1,		//单服多个, 连接服务, 网关, 广播, 组播
	WORLD_SERVICE	= 2,		//单服单个, 重要节点,奔溃需重启整组服务, 登录服务, 单服内全局事件, 排行榜, 公会, 组队
	ZONE_SERVICE	= 3,		//单服多个, 游戏服务,负载场景
	AI_SERVICE		= 4,		//单服多个, 与zone联动, ai服务,每个ai服务对应一个zone
	MARKET_SERVICE	= 5,		//单服单个, 拍卖行
	GM_SERVICE		= 6,		//单服单个, 无状态, 后台调用, 充值调用

	SERVICECTRL_SERVICE		= 8,//全局单个, 无状态, 所有服务均会连接该服务,用来同步特殊的消息
	GLOBAL_ROUTE_SERVICE	= 9,//全局多个, 无状态, 充值回调, 后台回调, http服务, 收到后进行验证,验证后,转发给对应服的GM_SERVICE
};

export_lua enum
{
	WORLD_SERVICE_ID = 1,
	MARKET_SERVICE_ID = 3,
	GM_SERVICE_ID = 4,

	MIN_ZONE_SERVICE_ID = 11, 
	MAX_ZONE_SERVICE_ID = 15,
	MIN_SHAREZONE_SERVICE_ID = 16, 
	MAX_SHAREZONE_SERVICE_ID = 20,

	MIN_AI_SERVICE_ID = 21, 
	MAX_AI_SERVICE_ID = 30,

	MIN_SOCKET_SERVICE_ID = 31,
	MAX_SOCKET_SERVICE_ID = 35,

	MIN_GLOBAL_ROUTE_SERVICE_ID = 41,
	MAX_GLOBAL_ROUTE_SERVICE_ID = 45,

	SERVICECTRL_SERVICE_ID = 60,
	MAX_SERVICE_ID = 63,
};

export_lua class ServerPort
{
public:
	export_lua ServerPort(uint32_t nServerPort = 0)
		:m_Data32(nServerPort)
	{}

	export_lua ServerPort(uint16_t  idWorld, uint16_t  idService)
		:m_Data{ idWorld, idService }
	{
	}
	export_lua ServerPort(const ServerPort& rht)
		:m_Data(rht.m_Data)
	{}

	export_lua bool IsVaild() const { return m_Data32 != 0; }

	operator uint32_t() const
	{
		return m_Data32;
	}

	export_lua bool operator==(const ServerPort& rht) const
	{
		return m_Data32 == rht.m_Data32;
	}

	export_lua bool operator<(const ServerPort& rht) const
	{
		return m_Data32 < rht.m_Data32;
	}


	export_lua uint16_t GetWorldID() const { return m_Data.idWorld; }
	export_lua void SetWorldID(uint16_t idWorld) {  m_Data.idWorld = idWorld; }
	export_lua uint16_t GetServiceID() const { return m_Data.idService; }
	export_lua void SetServiceID(uint16_t idService) { m_Data.idService = idService; }
	export_lua uint32_t GetData() const { return m_Data32; }
	export_lua void SetData(uint32_t _Data32) { m_Data32 = _Data32; }

private:
	struct  ST_SERVERPORT
	{
		uint16_t  idWorld;	//实际取值范围0~0x1FFF 8191
		uint16_t  idService;//实际取值范围0~0x3F 63
	};
	union
	{
		ST_SERVERPORT m_Data;
		uint32_t m_Data32;
	};
};

// custom specialization of std::hash can be injected in namespace std
namespace std
{
	template<> struct hash<ServerPort>
	{
		typedef ServerPort argument_type;
		typedef std::size_t result_type;
		result_type operator()(argument_type const& s) const
		{
			std::hash<uint32_t> hasher;
			return hasher(s.GetData());
		}
	};
}

export_lua class VirtualSocket
{
public:
	export_lua VirtualSocket(uint64_t nVirtualSocket = 0)
		:m_Data64(nVirtualSocket)
	{}

	export_lua VirtualSocket(const ServerPort& nServerPort)
		:m_Data{ nServerPort.GetWorldID(), nServerPort.GetServiceID(), 0,  0 }
	{}

	export_lua VirtualSocket(const ServerPort& nServerPort, uint16_t nSocketIdx)
		:m_Data{ nServerPort.GetWorldID(), nServerPort.GetServiceID(), nSocketIdx, 0}
	{
	}
	export_lua VirtualSocket(const VirtualSocket& rht)
		:m_Data64(rht.m_Data64)
	{}

	export_lua static VirtualSocket CreateVirtualSocket(const ServerPort& nServerPort, uint16_t nSocketIdx)
	{
		return VirtualSocket{ nServerPort , nSocketIdx };
	}

	export_lua bool IsVaild() const
	{
		return m_Data64 != 0;
	}

	operator uint64_t() const
	{
		return m_Data64;
	}

	export_lua bool operator==(const VirtualSocket& rht) const
	{
		return m_Data64 == rht.m_Data64;
	}

	export_lua bool operator<(const VirtualSocket& rht) const
	{
		return m_Data64 < rht.m_Data64;
	}


	export_lua ServerPort GetServerPort() const { return ServerPort{ m_Data.m_idWorld, m_Data.m_idService}; }
	export_lua void SetServerPort(const ServerPort& val) { m_Data.m_idWorld = val.GetWorldID(); m_Data.m_idService = val.GetServiceID(); }
	export_lua uint16_t GetSocketIdx() const { return m_Data.m_nSocketIdx; }
	export_lua void SetSocketIdx(uint16_t val) { m_Data.m_nSocketIdx = val; }
	export_lua uint64_t GetData64()const {return m_Data64;}
private:
	struct  ST_VIRTUALSOCKET
	{
		uint16_t m_idWorld;		//实际取值范围0~0x1FFF 8191
		uint16_t m_idService;   //实际取值范围0~0x3F 63
		uint16_t m_nSocketIdx;  //实际取值范围1~0xFFFF 65535
		uint16_t nRevert = 0;
	};
	union
	{
		ST_VIRTUALSOCKET m_Data;
		uint64_t m_Data64;
	};

};

namespace std
{
	template<> struct hash<VirtualSocket>
	{
		typedef VirtualSocket argument_type;
		typedef std::size_t result_type;
		result_type operator()(argument_type const& s) const
		{
			std::hash<uint64_t> hasher;
			return hasher(s.operator uint64_t());
		}
	};
}

struct ServerAddrInfo
{
	ServerAddrInfo() = default;
	ServerAddrInfo(const ServerAddrInfo&) = default;
	ServerAddrInfo& operator=(const ServerAddrInfo&) = default;

	uint16_t idWorld;
	uint16_t idService;
	std::string lib_name;
	std::string bind_addr;
	std::string route_addr;
	uint16_t route_port;
	std::string publish_addr;
	uint16_t publish_port;
	uint16_t debug_port;


};

const uint16_t CLIENT_MSG_ID_BEGIN = 1;
const uint16_t CLIENT_MSG_ID_END = 10000;

//常用内部消息通信及消息结构
enum MSGTYPE_INTERNAL
{
	COMMON_CMD_BEGIN = 0,
	COMMON_CMD_SC_KEY = 1,
	COMMON_CMD_PING = 2,
	COMMON_CMD_PONG = 3,
	COMMON_CMD_CLOSE = 10000,
	NETMSG_INITIATIVE_CLOSE		= 10000,	//sck->client 服务器主动关闭

	NETMSG_INTERNAL				= 10001,	//内网消息传输
	NETMSG_INTERNAL_FORWARD		= 10002,	//转发包
	NETMSG_INTERNAL_BROCAST_ALL = 10003,	//广播包
	NETMSG_INTERNAL_BROCAST_BYVS= 10004,	//组播包
	NETMSG_INTERNAL_BROCAST_BYID= 10005,	//组播包
	NETMSG_INTERNAL_BROCAST_BYGROUPID= 10006,	//组播包
	
	NETMSG_INTERNAL_SERVICE_REGISTER = 10010,	//gmservice->servicectrl
	NETMSG_INTERNAL_SERVICE_READY = 10011,

	NETMSG_SCK_CONNECT			= 10101,	//sck->other 一个socket连接上来了
	NETMSG_SCK_CLOSE			= 10102,	//sck->other socket关闭
	NETMSG_SCK_CHG_DEST			= 10103,	//other->sck 切换socket对应的服务器
	NETMSG_SCK_AUTH				= 10104,    //other->sck 设置socket的认证信息
	NETMSG_SERVICE_READY		= 10105,	//world->sck 开始监听
	NETMSG_SCK_STOP_ACCEPT		= 10106,	//world->sck 关闭监听
};


#pragma pack(push) //保存对齐状态
#pragma pack(1)   // 1 bytes对齐

struct MSG_HEAD
{
	unsigned short usSize;
	unsigned short usCmd;
};


struct MSG_INTERNAL_MSG_HEAD : public MSG_HEAD
{
	VirtualSocket nFrom;
	VirtualSocket nTo;
};

struct MSG_INTERNAL_FORWARD_MSG_HEAD : public MSG_HEAD
{
	VirtualSocket nFrom;
	VirtualSocket nTo;
	VirtualSocket nForward;
};

static const size_t BROCAST_MSG_MAX_SOCKET  = (_MAX_MSGSIZE - sizeof(MSG_HEAD) - sizeof(uint32_t) - sizeof(VirtualSocket)) / sizeof(VirtualSocket);
struct MSG_INTERNAL_BROCAST_MSG_HEAD : public MSG_HEAD
{
	uint32_t nAmount = 0;
	VirtualSocket nFrom;
	VirtualSocket setTo[BROCAST_MSG_MAX_SOCKET];

	uint16_t GetSize()
	{
		return sizeof(MSG_HEAD) + sizeof(nFrom) + sizeof(nAmount) + nAmount * sizeof(VirtualSocket);
	}
	static size_t GetMaxAmount()
	{
		return BROCAST_MSG_MAX_SOCKET;
	}
};

static const size_t BROCAST_BYID_MSG_MAX_ID = (_MAX_MSGSIZE - sizeof(MSG_HEAD) - sizeof(uint32_t) - sizeof(VirtualSocket)) / sizeof(OBJID);
struct MSG_INTERNAL_BROCAST_BYID_MSG_HEAD : public MSG_HEAD
{
	uint32_t nAmount = 0;
	VirtualSocket nFrom;
	OBJID setTo[BROCAST_BYID_MSG_MAX_ID];

	uint16_t GetSize()
	{
		return sizeof(MSG_HEAD) + sizeof(nFrom) + sizeof(nAmount) + nAmount * sizeof(OBJID);
	}
	static size_t GetMaxAmount()
	{
		return BROCAST_BYID_MSG_MAX_ID;
	}
};

static const size_t BROCAST_BYGROUPID_MSG_MAX_ID  = (_MAX_MSGSIZE - sizeof(MSG_HEAD) - sizeof(uint32_t) - sizeof(VirtualSocket)) / sizeof(OBJID);
struct MSG_INTERNAL_BROCAST_BYGROUPID_MSG_HEAD : public MSG_HEAD
{
	uint32_t nAmount = 0;
	VirtualSocket nFrom;
	OBJID setTo[BROCAST_BYGROUPID_MSG_MAX_ID];

	uint16_t GetSize()
	{
		return sizeof(MSG_HEAD) + sizeof(nFrom) + sizeof(nAmount) + nAmount * sizeof(OBJID);
	}
	static size_t GetMaxAmount()
	{
		return BROCAST_BYGROUPID_MSG_MAX_ID;
	}
};

struct MSG_INTERNAL_TRANSMITE : public MSG_HEAD
{
};

struct MSG_INTERNAL_SERVICE_REGISTER : public MSG_HEAD
{
	MSG_INTERNAL_SERVICE_REGISTER()
	{
		usCmd = NETMSG_INTERNAL_SERVICE_REGISTER;
		usSize = sizeof(MSG_INTERNAL_SERVICE_REGISTER);
	}
	uint16_t idWorld = 0;
	uint32_t update_time;
};

struct MSG_PING : public MSG_HEAD
{
	MSG_PING()
	{
		usCmd = COMMON_CMD_PING;
		usSize = sizeof(MSG_PING);
	}
};

struct MSG_PONG : public MSG_HEAD
{
	MSG_PONG()
	{
		usCmd = COMMON_CMD_PONG;
		usSize = sizeof(MSG_PONG);
	}
};


struct MSG_SERVICE_READY : public MSG_HEAD
{
	MSG_SERVICE_READY()
	{
		usCmd = NETMSG_SERVICE_READY;
		usSize = sizeof(MSG_SERVICE_READY);
	}
};

struct MSG_INTERNAL_SERVICE_READY : public MSG_HEAD
{
	MSG_INTERNAL_SERVICE_READY()
	{
		usCmd = NETMSG_INTERNAL_SERVICE_READY;
		usSize = sizeof(MSG_INTERNAL_SERVICE_READY);
	}
	uint16_t idWorld = 0;
	bool bReady = false;
};


struct MSG_SCK_STOP_ACCEPT : public MSG_HEAD
{
	MSG_SCK_STOP_ACCEPT()
	{
		usCmd = NETMSG_SCK_STOP_ACCEPT;
		usSize = sizeof(MSG_SCK_STOP_ACCEPT);
	}
};


struct MSG_SCK_CONNECT : public MSG_HEAD
{
	VirtualSocket vs;
	uint64_t ip;
	int port;
	MSG_SCK_CONNECT()
	{
		usCmd = NETMSG_SCK_CONNECT;
		usSize = sizeof(MSG_SCK_CONNECT);
	}
};

struct MSG_SCK_CLOSE : public MSG_HEAD
{
	VirtualSocket vs;
	MSG_SCK_CLOSE()
	{
		usCmd = NETMSG_SCK_CLOSE;
		usSize = sizeof(MSG_SCK_CLOSE);
	}
};

struct MSG_SCK_CHG_DEST : public MSG_HEAD
{
	VirtualSocket vs;
	uint16_t idService;
	MSG_SCK_CHG_DEST()
	{
		usCmd = NETMSG_SCK_CHG_DEST;
		usSize = sizeof(MSG_SCK_CHG_DEST);
	}
};


struct MSG_SCK_AUTH : public MSG_HEAD
{
	VirtualSocket vs;
	OBJID idAccount;
	MSG_SCK_AUTH()
	{
		usCmd = NETMSG_SCK_AUTH;
		usSize = sizeof(MSG_SCK_AUTH);
	}
};

struct MSG_INITIATIVE_CLOSE : public MSG_HEAD
{
	MSG_INITIATIVE_CLOSE()
	{
		usCmd = NETMSG_INITIATIVE_CLOSE;
		usSize = sizeof(MSG_INITIATIVE_CLOSE);
	}
};
#pragma pack(pop)//恢复对齐状态

#endif // NetworkDefine_h__