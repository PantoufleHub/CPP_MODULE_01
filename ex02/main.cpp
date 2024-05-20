#include <iostream>

int main(void)
{
	std::string bwain = "HI THIS IS BRAIN";
	std::string *stringPTR = &bwain;
	std::string &stringREF = bwain;

	std::cout << "Addr of string         : " << &bwain << std::endl;
	std::cout << "Value of pointer       : " << stringPTR << std::endl;
	std::cout << "Value of reference     : " << &stringREF << std::endl;
	std::cout << "String value           : " << bwain << std::endl;
	std::cout << "Value held by pointer  : " << *stringPTR << std::endl;
	std::cout << "Value held by reference: " << stringREF << std::endl;
	return 0;
}