#ifndef _SESSION_H
#define _SESSION_H

#include <array>
#include <bitset>

#include "forward.hpp"
#include "../../common/src/forward.hpp"
#include "../../common/src/typedefs.hpp"

namespace UserStatus
{
	enum
	{
		away = 0,
		refuseIMs,
		refusePChats,
		all
	};
}

class Session : public std::enable_shared_from_this<Session>
{
public:
	Session(uint32, CLConnectionPtr);
	uint32 getId() const;
	uint16 getIcon();
	std::string&& getClientInfoText();
	std::string&& getVersionString() const;
	void setIcon(uint16);
	void sendDisconnect();
private:
	AccountRef account;
	CLConnectionPtr connection;
	std::string nickname;
	ByteString customIcon;
	std::mutex mutex;
	std::bitset<UserStatus::all> status;
	std::array<uint32, 5> last5ChatTimes;
	uint32 id;
	uint32 version;
	uint16 icon;
};

#endif // _SESSION_H
