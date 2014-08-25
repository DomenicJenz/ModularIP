#include <iostream>
#include <vector>


int main (int argc, char** argv)
{
	std::cout << "Hello World ! " << std::endl;
	std::vector<int> testVec = {1,2,3,4,5,6};
	for (const auto& blubb : testVec)
	{
		std::cout << blubb << std::endl;
	}
}
