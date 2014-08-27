/*
 * ReadFileModule.h
 *
 *  Created on: 26.08.2014
 *      Author: domenicjenz
 */

#ifndef _READFILEMODULE_H_
#define _READFILEMODULE_H_

#include "Module.h"
#include "base/Slots.h"
#include <string>
#include "base/MemoryBuffer.h"

namespace ModularIP {
namespace Modules {

using namespace ModularIP::Base;

class ReadFileModule : public Module<InputSlots<std::string>, OutputSlots<MemoryBuffer>>
{
public:
	ReadFileModule () = default;
	virtual ~ReadFileModule () = default;

	std::string inputDescription (size_t index) const override;
	std::string outputDescription (size_t index) const override;

	ModuleStatus execute () override;
};

} /* namespace Modules */
} /* namespace ModularIP */

#endif /* _READFILEMODULE_H_ */
