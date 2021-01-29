#include "ZombieEvent.hpp"

int     main(void)
{
    ZombieEvent zombieEvent;

    Zombie *zombie = new Zombie("Libovski");
    zombie->announce();
    delete zombie;

    zombieEvent.setZombieType("junour");
    zombie = zombieEvent.newZombie("Great Libovski");
    delete zombie;

    zombieEvent.setZombieType("senour");
    zombie = zombieEvent.randomChump();
    delete zombie;
}