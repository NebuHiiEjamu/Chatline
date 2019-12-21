#ifndef _FILESESSION_H
#define _FILESESSION_H

#include <string_view>

#include "forward.hpp"
#include "../user/forward.hpp"
#include "../../common/src/forward.hpp"
#include "../../common/src/typedefs.hpp"

class FileSession : public std::enable_shared_from_this<FileSession>
{
public:
	static constexpr std::string_view getPlatform();

	FileSession(uint16, FileConnectionPtr);
private:
	SessionRef user;
	ByteString blockChunk;
	Timestamp lastSendTime;
	Size lastSize;
	Size maxSize;
};

#endif // _FILESESSION_H
