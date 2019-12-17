#ifndef _CLSTREAM_H
#define _CLSTREAM_H

#include <string_view>

#include "common/src/stream.hpp"

class CLInStream : public InStream
{
public:
};

class CLOutStream : public InStream
{
public:
	template <class String> write(const std::string_view&, const String&);
};

#endif // _CLSTREAM_H
