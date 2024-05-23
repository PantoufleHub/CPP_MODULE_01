#include "Harl.hpp"

typedef void (Harl::*t_harlFunc) (void) const;

Harl::Harl(void)
{}

Harl::~Harl(void)
{}

void Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string strLevel) const
{
	t_harlFunc funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int maxLevel = (int)levels->length();
	while (strLevel.compare("") && maxLevel >= 0)
	{
		if (levels[maxLevel].compare(strLevel) == 0)
		{
			(this->*(funcs[maxLevel]))();
			return ;
		}
		maxLevel--;
	}
	std::cout << "Can't even type a simple complaint level..." << std::endl;
}
