#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie zombos = Zombie("inMain");
	Zombie *zombub = new Zombie("inMainPointer");
	randomChump("Chump");
	Zombie *zombubi = newZombie("newZombie func");
	zombubi->announce();

	delete zombub;
	delete zombubi;
	return 0;
}
