#ifndef ZOMBIE
# define ZOMBIE

#include <iostream>

class Zombie
{
private:
std::string _name;


public:
void announce(void) const;
void setName(std::string name);
Zombie(void);
~Zombie(void);

};

#endif