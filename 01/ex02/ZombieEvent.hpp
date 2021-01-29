#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string type;

public:
    ZombieEvent(void);
    Zombie  *randomChump(void);
    Zombie  *newZombie(std::string name);
    void    setZombieType(std::string type);
    ~ZombieEvent(void);
};

#endif