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
	Session(uint16, CLConnectionPtr);
	uint16 getId() const;
	uint16 getIcon();
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
	uint16 id;
	[[deprecated("Superseded by custom icon")]] uint16 icon;
};

#endif // _SESSION_H
