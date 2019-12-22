#ifndef _CLCONNECTION_H
#define _CLCONNECTION_H

#include "../common/src/forward.hpp"
#include "../common/src/connection.hpp"

class CLConnection : public Connection<boost::asio::ip::tcp>
{
public:
	CLConnection();
protected:
	void onConnect(const std::string_view&, uint16) override;
	void onSend(const Buffer&) override;
	void onReceive(Buffer&) override;
	void onError(Error) override;
	void onDisconnect() override;
};

using CLConnectionPtr = std::shared_ptr<CLConnection>;
using CLConnectionRef = std::weak_ptr<CLConnection>;

#endif // _CLCONNECTION_H
