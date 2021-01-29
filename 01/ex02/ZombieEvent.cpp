#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{

}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie;

    if (this->type.size() > 0)
        zombie = new Zombie(name, this->type);
    else
        zombie = new Zombie(name);
    zombie->announce();
    return (zombie);
}

Zombie  *ZombieEvent::randomChump(void)
{
    std::string mas[3] = {"Chuvak", "Programmer", "Disigner"};

    return (newZombie(mas[rand() % 3]));
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

ZombieEvent::~ZombieEvent(void)
{

}