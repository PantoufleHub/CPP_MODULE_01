#include "Weapon.hpp"

Weapon::Weapon(void)
{}

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon(void)
{}

const std::string& Weapon::getType(void) const
{
	// std::string &ref = &_type;
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}
