#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    std::string mas[3] = {"Chuvak", "Programmer", "Disigner"};
    this->zombie = new Zombie[n];

    for (int i = 0; i < n; i++)
    {
        this->zombie[i].set_name(mas[rand() % 3]);
        this->zombie[i].set_type("junour");
    }
    this->count_zombie = n;
}

void     ZombieHorde::announce(void)
{
    for (int i = 0; i < this->count_zombie; i++)
        this->zombie[i].announce();
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->zombie;
}