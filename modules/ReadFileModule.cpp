/*
 * ReadFileModule.cpp
 *
 *  Created on: 26.08.2014
 *      Author: domenicjenz
 */

#include "ReadFileModule.h"
#include <iostream>

namespace ModularIP {
namespace Modules {


ModuleStatus ReadFileModule::execute ()
{
	setOutput<0> (getInput<0>() + getInput<1>());
	return ModuleStatus::OK;
}

} /* namespace Modules */
} /* namespace ModularIP */
