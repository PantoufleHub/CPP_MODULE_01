#include "Harl.hpp"

int main(void)
{
	std::string input;
	Harl harl;

	while (!std::cin.eof())
	{
		std::cout << "Complaint level: ";
		std::getline(std::cin, input);
		if (!input.compare("EXIT"))
		{
			std::cout << "Suit yourself..." << std::endl;
			return 0;
		}
		if (!std::cin.eof())
			harl.complain(input);
		else
			std::cout << std::endl << "Suit yourself..." << std::endl;
	}
	return 0;
}