#include <iostream>
#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie chumpos = Zombie(name);
	chumpos.announce();
}