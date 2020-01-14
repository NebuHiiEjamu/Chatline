#ifndef _CLSTREAM_H
#define _CLSTREAM_H

#include <string_view>

#include "common/src/stream.hpp"

class CLInStream : public InStream
{
public:
};

class CLOutStream : public OutStream
{
public:
	template <class T> void write(T);
	void write(const std::string_view&, const ByteString&);
	template <class String> void writePString(const String&);
	template <class String> void writeSPString(const String&);
	void writeTrueFalse(bool);
	void writeYN(bool);
};

#endif // _CLSTREAM_H
