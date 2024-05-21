#ifndef HUMAN_A
# define HUMAN_A

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
std::string _name;
Weapon &_weapon;

public:
void attack() const;
HumanA(std::string name, Weapon &weapon);
~HumanA(void);

};

#endif