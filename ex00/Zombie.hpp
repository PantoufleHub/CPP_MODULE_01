#ifndef ZOMBIE
# define ZOMBIE

#include <iostream>

class Zombie
{
private:
std::string _name;


public:
void announce(void) const;
Zombie(void);
Zombie(std::string name);
~Zombie(void);

};

#endif