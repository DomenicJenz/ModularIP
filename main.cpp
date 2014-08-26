#include <iostream>
#include <vector>

#include "base/Slots.h"
#include "modules/ReadFileModule.h"

using namespace ModularIP::Base;
using namespace ModularIP::Modules;



int main (int argc, char** argv)
{
	ReadFileModule readFile;
	readFile.setInput<0>(17);
	readFile.setInput<1>(43);
	readFile.execute ();
	std::cout << readFile.getOutput<0>() << std::endl;
}
