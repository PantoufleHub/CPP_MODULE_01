#ifndef HUMAN_B
# define HUMAN_B

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
std::string _name;
Weapon *_weapon;

public:
void attack() const;
void setWeapon(Weapon &weapon);
HumanB(std::string name);
~HumanB(void);
};

#endif