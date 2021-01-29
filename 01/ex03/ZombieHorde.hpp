#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
    Zombie  *zombie;
    int     count_zombie;

public:
    ZombieHorde(int n);
    void    announce(void);
    ~ZombieHorde();
};

#endif