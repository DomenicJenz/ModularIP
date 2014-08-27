/*
 * Slots.h
 *
 *  Created on: 26.08.2014
 *      Author: domenicjenz
 */

#ifndef _SLOTS_H_
#define _SLOTS_H_

#include <tuple>
#include <string>

namespace ModularIP {
namespace Base {

template<typename... Types>
class InputSlots
{
public:
	virtual ~InputSlots() = default;

	virtual std::string inputDescription (size_t index) const = 0;

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

	constexpr size_t numberOfInputs () const
	{
		return sizeof...(Types);
	}

private:
	std::tuple<Types...> _inputs;
};

template<typename... Types>
class OutputSlots
{
public:
	virtual ~OutputSlots () = default;
	virtual std::string outputDescription (size_t index) const = 0;

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

	constexpr std::size_t numberOfOutputs () const
	{
		return sizeof...(Types);
	}

protected:
	template<size_t Index>
	typename std::tuple_element<Index, std::tuple<Types...>>::type& getOutputRef ()
	{
		return std::get<Index>(_outputs);
	}

private:
	std::tuple<Types...> _outputs;
};

} /* namespace Base */
} /* namespace ModularIP */

#endif /* _SLOTS_H_ */
