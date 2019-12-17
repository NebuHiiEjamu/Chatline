#ifndef _CLCONNECTION_H
#define _CLCONNECTION_H

#include "forward.hpp"
#include "../../common/src/forward.hpp"
#include "../../common/src/connection.hpp"

class CLConnection : public Connection<boost::asio::ip::tcp>
{
public:
	CLConnection(HivePtr, AcceptorPtr);
	void setSession(SessionRef);
protected:
	void onAccept(const std::string_view&, uint16) override;
	void onSend(const Buffer&) override;
	void onReceive(Buffer&) override;
	void onError(Error) override;
	void onDisconnect() override;
private:
	SessionRef session;
	AcceptorPtr acceptor;
};

#endif // _CLCONNECTION_H
