#include <iostream>
#include <vector>

#include "modules/ReadFileModule.h"

using namespace ModularIP::Base;
using namespace ModularIP::Modules;



int main (int argc, char** argv)
{
	system("pwd");
	ReadFileModule readFile;
	readFile.setInput<0>("examples/ScannerOut1.BMP");
	readFile.execute ();
	std::cout << readFile.inputDescription(0) << ". "
	          << readFile.outputDescription(0) << std::endl;
	std::cout << readFile.numberOfInputs() << " " << readFile.numberOfOutputs() << std::endl;
	std::cout << readFile.getOutput<0>().size() << std::endl;
}
