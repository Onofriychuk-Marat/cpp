#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with his ";
    std::cout << this->weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{

}