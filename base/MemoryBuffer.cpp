/*
 * MemoryBuffer.cpp
 *
 *  Created on: 27.08.2014
 *      Author: domenicjenz
 */

#include "MemoryBuffer.h"

const int TempBufferSize = (1<<12);

namespace ModularIP {
namespace Base {

MemoryBuffer::MemoryBuffer ()
{
	// TODO Auto-generated constructor stub

}

MemoryBuffer::~MemoryBuffer ()
{
	// TODO Auto-generated destructor stub
}

void MemoryBuffer::fillFromStdStream (std::istream& input)
{
	char tempBuffer[TempBufferSize];
	while (input.good())
	{
		input.read(tempBuffer, TempBufferSize);
		_buffer.insert(_buffer.end(), tempBuffer, tempBuffer + input.gcount());
	}
}

} /* namespace Base */
} /* namespace ModularIP */
