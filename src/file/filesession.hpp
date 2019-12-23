#ifndef _FILESESSION_H
#define _FILESESSION_H

#include <array>
#include <bitset>
#include <string_view>

#include "forward.hpp"
#include "../common/src/forward.hpp"
#include "../common/src/typedefs.hpp"

namespace TransferAttributes
{
	enum
	{
		dataForkOnly = 0,
		sender,
		sending,
		maySendData,
		uploading,
		all
	};
}

enum class FilePlatform : Byte
{
	mac,
	win32,
	unknown
};

enum class FileMode : Byte
{
	mode0,
	mode1,
	mode2,
	mode3
};

class FileSession : public std::enable_shared_from_this<FileSession>
{
public:
	static constexpr std::string_view getMyPlatform();

	FileSession(uint16, FileConnectionPtr);

private:
	ByteString blockChunk;
	Timestamp time;
	Size lastSize;
	Size maxSize;
	std::bitset<TransferAttributes::all> attributes;
	std::array<char, 4> macType;
	std::array<char, 4> macCreator;
	FilePlatform platform;
	FileMode mode;
};

#endif // _FILESESSION_H
