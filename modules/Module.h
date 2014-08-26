/*
 * Module.h
 *
 *  Created on: 25.08.2014
 *      Author: domenicjenz
 */

#ifndef _MODULE_H__
#define _MODULE_H__

namespace ModularIP{ namespace Modules {

enum class ModuleStatus
{
	OK
};

template<typename Inputs, typename Outputs>
class Module
{
	//static_assert(false, "Take the specialization with InputSlots and OutputSlots!");
};


template<template<typename...> class InputSlots, typename... InputTypes, template<typename...> class OutputSlots, typename... OutputTypes>
class Module<InputSlots<InputTypes...>, OutputSlots<OutputTypes...>> : public InputSlots<InputTypes...>, public OutputSlots<OutputTypes...>
{
public:
	Module () = default;
	virtual ~Module () = default;

	virtual ModuleStatus execute () = 0;
};

}}

#endif /* _MODULE_H_ */
