#ifndef _CLSTREAM_H
#define _CLSTREAM_H

#include <string>
#include <string_view>

#include "../common/src/stream.hpp"

class CLInStream : public InStream
{
public:
	template <class T> T read();
	template <> bool read();
	template <> Timestamp&& read();
	template <> FilePath&& read();
	template <> std::string&& read();
};

class CLOutStream : public InStream
{
public:
	void write(bool);
	void write(const FilePath&);
	void write(const Timestamp&);
	void write(const std::string_view&, Size);
	template <class T> void write(T);
	void write16(uint16); // for ambiguity
	void write32(uint32); // for ambiguity
};

#endif // _CLSTREAM_H
