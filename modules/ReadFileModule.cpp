/*
 * ReadFileModule.cpp
 *
 *  Created on: 26.08.2014
 *      Author: domenicjenz
 */

#include "ReadFileModule.h"
#include <iostream>
#include <fstream>

namespace ModularIP {
namespace Modules {

std::string ReadFileModule::inputDescription (size_t index) const
{
	switch (index)
	{
	case 0:
		return "File to load";
	default:
		return "";
	}
}

std::string ReadFileModule::outputDescription (size_t index) const
{
	switch (index)
	{
	case 0:
		return "Buffer containing the file contents";
	default:
		return "";
	}
}

ModuleStatus ReadFileModule::execute ()
{
	std::ifstream fileStream;
	std::string fileName = getInput<0>();
	fileStream.open (fileName);
	MemoryBuffer buf;
	getOutputRef<0>().fillFromStdStream(fileStream);
	return ModuleStatus::OK;
}

} /* namespace Modules */
} /* namespace ModularIP */
