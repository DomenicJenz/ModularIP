/*
 * Slots.h
 *
 *  Created on: 26.08.2014
 *      Author: domenicjenz
 */

#ifndef _SLOTS_H_
#define _SLOTS_H_

#include <tuple>

namespace ModularIP {
namespace Base {

template<typename... Types>
class InputSlots
{
public:

	template<size_t Index>
	const typename std::tuple_element<Index, std::tuple<Types...>>::type& getInput ()
	{
		return std::get<Index>(_inputs);
	}

	template<size_t Index>
	void setInput (const typename std::tuple_element<Index, std::tuple<Types...>>::type& newValue)
	{
		std::get<Index>(_inputs) = newValue;
	}

private:
	std::tuple<Types...> _inputs;
};

template<typename... Types>
class OutputSlots
{
public:

	template<size_t Index>
	const typename std::tuple_element<Index, std::tuple<Types...>>::type& getOutput ()
	{
		return std::get<Index>(_outputs);
	}

	template<size_t Index>
	void setOutput (const typename std::tuple_element<Index, std::tuple<Types...>>::type& newValue)
	{
		std::get<Index>(_outputs) = newValue;
	}

private:
	std::tuple<Types...> _outputs;
};

} /* namespace Base */
} /* namespace ModularIP */

#endif /* _SLOTS_H_ */
