#ifndef NetworkService_h__
#define NetworkService_h__

#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define NOMINMAX

#include <map>
#include <memory>
#include <mutex>
#include <set>
#include <thread>
#include <vector>

#include "BaseCode.h"
#include "BytePerSecondCount.h"
#include "LockfreeQueue.h"
#include "NetworkDefine.h"
#include "NetworkMessage.h"
#include "Thread.h"
#include "libwebsockets.h"

struct event_base;
struct event;
struct evconnlistener;
struct lws_context;
enum lws_callback_reasons;

class CNetSocket;
class CNetWebSocket;
class CEventManager;

class CNetEventHandler
{
public:
	CNetEventHandler() {}
	virtual ~CNetEventHandler() {}

public:
	// connect to other server succ
	virtual void OnConnected(CNetSocket*) = 0;
	// connect to other server failed, can set CNetSocket::setReconnectTimes = 0 to stop reconnect
	virtual void OnConnectFailed(CNetSocket*) = 0;
	// lost connect
	virtual void OnDisconnected(CNetSocket*) = 0;
	// accept a new client
	virtual void OnAccepted(CNetSocket*) = 0;
	// receive data
	virtual void OnRecvData(CNetSocket*, byte* pBuffer, size_t len) = 0;
	// recv over time
	virtual void OnRecvTimeout(CNetSocket*) = 0;
};

class CWebSocketEventHandler
{
public:
	CWebSocketEventHandler() {}
	virtual ~CWebSocketEventHandler() {}

public:
	// new client
	virtual void OnWsAccepted(CNetWebSocket* ws) = 0;
	// notice: 暂时不会回调，没实现connect
	virtual void OnWsConnected(CNetWebSocket* ws) = 0;
	// notice: 暂时不会回调，没实现connect
	virtual void OnWsConnectFailed(CNetWebSocket* ws) = 0;
	// socket was disconnected
	virtual void OnWsDisconnected(CNetWebSocket* ws) = 0;
	// receive data
	virtual void OnWsRecvData(CNetWebSocket* ws, byte* pBuffer, size_t len) = 0;
};

class CNetworkService
{
public:
	CNetworkService();
	virtual ~CNetworkService();

	void Destroy();
	//监听
	evconnlistener* Listen(const char* addr, int port, CNetEventHandler* pEventHandler);
	bool			EnableListener(evconnlistener* listener, bool bEnable = false);
	// http监听
	bool ListenHttpPort(const char* addr, int port, std::function<void(struct evhttp_request* req)> func);
	//阻塞连接到一个目标地址
	CNetSocket* ConnectTo(const char* addr, int port, CNetEventHandler* pEventHandler);
	//异步连接到一个目标地址
	CNetSocket* AsyncConnectTo(const char* addr, int port, CNetEventHandler* pEventHandler);
	bool		_Reconnect(CNetSocket* pSocket);
	bool		_AsyncReconnect(CNetSocket* pSocket);

	void Stop();
	//开启独立的IO线程
	void StartIOThread(const std::string&	 thread_name,
					   std::function<void()> time_out_func = std::function<void()>(),
					   uint32_t				 time_out_ms   = 60 * 60,
					   uint16_t				 idService	   = 0);
	void OnIOThreadTimeOut();

	//读取IO一次，如果开启了独立IO线程则不需调用
	void RunOnce();

	virtual CNetSocket*			 CreateSocket(CNetEventHandler* pHandle, bool bPassive);
	struct evhttp*				 GetHttpHandle() const { return m_pHttpHandle; }
	bool						 GetIPCheck() const { return m_bIPCheck; }
	void						 SetIPCheck(bool val) { m_bIPCheck = val; }
	size_t						 GetIPCheckNum() const { return m_nIPCheckNum; }
	void						 SetIPCheckNum(size_t val) { m_nIPCheckNum = val; }
	MPSCQueue<CNetworkMessage*>& _GetMessageQueue() { return m_MessageQueue; }

public:
	static void accept_conn_cb(evconnlistener*, int fd, struct sockaddr* addr, int socklen, void* arg);
	static void accept_error_cb(struct evconnlistener*, void* arg);
	static void http_process_cb(struct evhttp_request* req, void* arg);

	void OnAccept(int fd, struct sockaddr* addr, int, evconnlistener* listener);

public:
	event_base* GetEVBase() const { return m_pBase; }

	size_t GetSocketAmount();
	// socket广播消息
	void BrocastMsg(byte* buf, size_t len, SOCKET execpt_this = 0);
	//直接发送Socket消息
	bool SendSocketMsg(SOCKET _socket, byte* buf, size_t len);
	bool SendSocketMsgByIdx(uint16_t nSocketIdx, byte* buf, size_t len);
	//主动关闭一个连接
	bool KickSocket(SOCKET _socket);

	void				AddRecvByteCount(size_t len);
	void				AddSendByteCount(size_t len);
	BytePerSecondCount& GetRecvBPS() { return m_RecvBPS; }
	BytePerSecondCount& GetSendBPS() { return m_SendBPS; }

public:
	void _AddSocket(CNetSocket* pSocket);
	void _CloseSocket(uint32_t nSocketIdx);
	void _AddConnectingSocket(CNetSocket* pSocket);
	void _RemoveSocket(CNetSocket* pSocket);
	void _AddCloseingSocket(CNetSocket* pSocket);
	void JoinIOThread();

private:
	void _ProceseCloseingSocket();

public:
	///////////////////////////////////////////////////////////////////
	// websocket
	bool ListenWebSocket(int port, CWebSocketEventHandler* pEventHandler);
	void StopWebSocket();

	CNetWebSocket* CreateWebSocket();
	void		   DestroyWebSocket(CNetWebSocket* pWebSocket);
	void		   AddWebSocket(SOCKET sockfd, CNetWebSocket* pWebSocket);
	void		   RemoveWebSocket(SOCKET sockfd);
	void		   KickWebSocket(SOCKET sockfd);

	uint16_t _GetWebSocketIndex();
	void	 _PushWebSocketIndexBack(uint16_t index);

	void				  StartWebSocketIOThread();
	static int			  OnWebSocketCallback(struct lws* wsi, enum lws_callback_reasons reason, void* user, void* in, size_t len);
	static CNetWebSocket* _GetWebSocketFromLWS(struct lws* wsi);
	static void			  _SetWebSocketToLWS(struct lws* wsi, CNetWebSocket* pWebSocket);

protected:
	event_base*										m_pBase;
	std::map<evconnlistener*, CNetEventHandler*>	m_setListener;
	struct evhttp*									m_pHttpHandle;
	std::function<void(struct evhttp_request* req)> m_funcOnReciveHttp;
	std::mutex										m_mutex;

	std::map<SOCKET, CNetSocket*>	m_setSocket;
	std::deque<uint16_t>			m_SocketIdxPool;
	std::array<CNetSocket*, 0xFFFF> m_setSocketByIdx;

	std::unordered_set<CNetSocket*> m_setConnectingSocket;
	std::unordered_set<CNetSocket*> m_setCloseingSocket;

	MPSCQueue<CNetworkMessage*> m_MessageQueue;

	std::unique_ptr<std::thread> m_pIOThread;
	struct event*				 m_pIOTimeOutEvent = nullptr;
	BytePerSecondCount			 m_RecvBPS;
	BytePerSecondCount			 m_SendBPS;

	std::atomic<bool>	m_bStop;
	std::vector<event*> m_setEvTimed;

	uint32_t m_nWorkInterval;

	struct IPInfo
	{
		time_t nextResetTime = 0;
		size_t nCount		 = 0;
	};
	std::map<std::string, IPInfo> m_setIP;
	bool						  m_bIPCheck	= false;
	size_t						  m_nIPCheckNum = 400;

	std::function<void()> m_IOThreadTimeOutFunc;

	///////////////////////////////////////////////////////////////////
	// websocket
	std::deque<uint16_t>			   m_WebSocketIdxPool;
	std::array<CNetWebSocket*, 0x7FFF> m_setWebSocketByIdx;
	std::map<SOCKET, CNetWebSocket*>   m_mapWebSockets;
	CWebSocketEventHandler*			   m_pWebSocketEventHandler;
	struct lws_context*				   m_pLwsContext;
};

#endif // NetworkService_h__
