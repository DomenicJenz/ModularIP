/*
 * MemoryBuffer.h
 *
 *  Created on: 27.08.2014
 *      Author: domenicjenz
 */

#ifndef _MEMORYBUFFER_H_
#define _MEMORYBUFFER_H_

#include <istream>
#include <vector>

namespace ModularIP {
namespace Base {

class MemoryBuffer
{
public:
	MemoryBuffer ();
	virtual ~MemoryBuffer ();
	MemoryBuffer (const MemoryBuffer& other)
	{
		_buffer = other._buffer;
	}

	void fillFromStdStream (std::istream& input);

	const char* getAsArray ()
	{
		return _buffer.data();
	}

	size_t size() const
	{
		return _buffer.size();
	}

private:
	std::vector<char> _buffer;
};

} /* namespace Base */
} /* namespace ModularIP */

#endif /* _MEMORYBUFFER_H_ */
