/*
 * ReadFileModule.h
 *
 *  Created on: 26.08.2014
 *      Author: domenicjenz
 */

#ifndef _READFILEMODULE_H_
#define _READFILEMODULE_H_

#include "Module.h"
#include "Slots.h"
#include <string>

namespace ModularIP {
namespace Modules {

using namespace ModularIP::Base;

class ReadFileModule : public Module<InputSlots<int, int>, OutputSlots<int>>
{
public:
	ReadFileModule () = default;
	virtual ~ReadFileModule () = default;

	ModuleStatus execute ();
};

} /* namespace Modules */
} /* namespace ModularIP */

#endif /* _READFILEMODULE_H_ */
