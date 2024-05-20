#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Hello " << _name << "!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Goodbye " << _name << "!" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
