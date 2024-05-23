#include "Harl.hpp"

int main(int argc, char **argv)
{
	std::string input;
	Harl harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
			std::cout << "[ YOU SUCK ]\n" << "Can't even type a simple complaint level...\n" << std::endl;
	return 0;
}