#include <iostream>
#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *newZomb = new Zombie(name);

	return newZomb;
}