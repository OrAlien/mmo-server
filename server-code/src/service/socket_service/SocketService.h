#ifndef SocketService_h__
#define SocketService_h__

#include "IService.h"
#include "MyTimer.h"
#include "NetSocket.h"
#include "NetWebSocket.h"
#include "ServiceComm.h"
#include "UIDFactory.h"

class CSocketService;
class CGameClient
{
public:
	CGameClient();
	~CGameClient();

	const ServerPort& GetDestServerPort() const { return m_nDestServerPort; }
	void			  SetDestServerPort(const ServerPort& val) { m_nDestServerPort = val; }
	VirtualSocket	  GetVirtualSocket() const { return m_VirtualSocket; }
	void			  SetVirtualSocket(VirtualSocket val) { m_VirtualSocket = val; }

	uint16_t GetMessageAllowBegin() { return m_nMessageAllowBegin; }
	uint16_t GetMessageAllowEnd() { return m_nMessageAllowEnd; }
	void	 SetMessageAllow(uint16_t nMessageAllowBegin, uint16_t nMessageAllowEnd)
	{
		m_nMessageAllowBegin = nMessageAllowBegin;
		m_nMessageAllowEnd	 = nMessageAllowEnd;
	}

	void Close();
	bool SendMsg(byte* pBuffer, size_t len);

	CSocketService* GetService() const { return m_pService; }
	void			SetService(CSocketService* val) { m_pService = val; }
	std::string		GetSocketAddr() const { return m_SocketAddr; }
	void			SetSocketAddr(std::string val) { m_SocketAddr = val; }
	uint32_t		GetSocketPort() const { return m_nSocketPort; }
	void			SetSocketPort(uint32_t val) { m_nSocketPort = val; }
	bool			IsVaild() const;
	bool			IsAuth() const { return m_bAuth; }
	void			SetAuth(bool val) { m_bAuth = val; }

private:
	VirtualSocket m_VirtualSocket;
	ServerPort	  m_nDestServerPort;
	uint16_t	  m_nMessageAllowBegin;
	uint16_t	  m_nMessageAllowEnd;
	std::string	  m_SocketAddr;
	uint32_t	  m_nSocketPort;

	OBJID			m_idUser;
	bool			m_bAuth;
	CSocketService* m_pService = nullptr;
};

struct event;
class CNetMSGProcess;
class CSocketService : public IService, public CServiceCommon, public CNetEventHandler, public CWebSocketEventHandler
{
public:
	CSocketService(const ServerPort& nServerPort);
	virtual ~CSocketService();
	void Release() { delete this; }
	bool Create();

public:
	virtual void OnConnected(CNetSocket* pSocket) override;
	virtual void OnConnectFailed(CNetSocket*) override;
	virtual void OnDisconnected(CNetSocket* pSocket) override;
	virtual void OnAccepted(CNetSocket* pSocket) override;
	virtual void OnRecvData(CNetSocket* pSocket, byte* pBuffer, size_t len) override;
	virtual void OnRecvTimeout(CNetSocket* pSocket) override;

	// callback for websocket
	virtual void OnWsAccepted(CNetWebSocket* pWebSocket) override;
	virtual void OnWsConnected(CNetWebSocket* pWebSocket) override;
	virtual void OnWsConnectFailed(CNetWebSocket* pWebSocket) override;
	virtual void OnWsDisconnected(CNetWebSocket* pWebSocket) override;
	virtual void OnWsRecvData(CNetWebSocket* pWebSocket, byte* pBuffer, size_t len) override;

	void		 OnProcessMessage(CNetworkMessage*);
	virtual void OnLogicThreadCreate() override;
	virtual void OnLogicThreadExit() override;
	virtual void OnLogicThreadProc() override;

	CGameClient* QueryClient(const VirtualSocket& vs);
	void		 AddClient(const VirtualSocket& vs, CGameClient* pClient);
	void		 RemoveClient(const VirtualSocket& vs);

	void		 MapClientByUserID(OBJID idUser, CGameClient* pClient);
	CGameClient* QueryClientByUserID(OBJID idUser);
	bool		 DelClientByUserID(OBJID idUser);

private:
	std::mutex							  m_mutex;
	std::map<VirtualSocket, CGameClient*> m_setVirtualSocket;
	std::map<OBJID, CGameClient*>		  m_mapClientByUserID;

	CUIDFactory m_UIDFactory;

	std::deque<uint16_t> m_SocketPool;
	CNetMSGProcess*		 m_pNetMsgProcess;

	uint64_t m_nSocketMessageProcess	= 0;
	uint64_t m_nWebSocketMessageProcess = 0;
	uint64_t m_nMessageProcess			= 0;
	CMyTimer m_tLastDisplayTime;
};

#define SocketService() MyTLSTypePtr<CSocketService>::get()

#endif // SocketService_h__
