#ifndef MarketService_h__
#define MarketService_h__

#include "IService.h"
#include "NetSocket.h"
#include "ServiceComm.h"
#include "UIDFactory.h"

struct event;
class CNetMSGProcess;
class CMarketService : public IService, public CServiceCommon
{
public:
	CMarketService(const ServerPort& nServerPort);
	virtual ~CMarketService();
	void Release() override{ delete this; }
	bool Create();

public:
	virtual void OnLogicThreadProc() override;
	virtual void OnLogicThreadCreate() override;
	virtual void OnLogicThreadExit() override;

	virtual void OnProcessMessage(CNetworkMessage*) override;
};

CMarketService* MarketService();
inline auto EventManager() { return MarketService()->GetEventManager();}  
inline auto NetMsgProcess() { return MarketService()->GetNetMsgProcess();}  

#endif // MarketService_h__
