#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include <bitset>
#include <boost/predef.h>

#include "../../common/src/typedefs.hpp"
#include "session.h"

namespace Access
{
	enum
	{
		ban = 0,
		broadcast,
		canLockUnlockNews,
		delCat,
		dropBox,
		exempt,
		filesCreateFolder,
		filesDelete,
		filesDownload,
		filesEditInfo,
		filesMove,
		filesSeeList,
		filesUpload,
		filesUploadAnywhere,
		getInfo,
		immortal,
		kick,
		makeCat,
		noAgree,
		postNews,
		readChat,
		readNews,
		sendChat,
		sendMsg,
		servInfo,
		all
	};
}

class Account : public std::enable_shared_from_this<Account>
{
public:
	Account(const std::string_view&, const std::string_view&, ByteString);
	std::string&& getAccess();
	std::string_view& getLogin();
	bool isAdmin();
private:
	std::string login;
	ByteString password;
	std::mutex mutex;
	FilePath folder;
	std::bitset<Access::all> access;
	uint32 downloadLimit;
	uint32 speedLimit;
	uint32 uploadLimit;
};

#endif // _ACCOUNT_H
