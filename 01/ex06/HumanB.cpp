#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = 0;
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with his ";
    std::cout << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB(void)
{
    
}