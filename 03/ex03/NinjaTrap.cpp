#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Ninja " << name;
    std::cout << " is born and ready to kill!" << std::endl;
    this->hitPoints = 60;
    this->maxHitPoints = 60;
    this->energyPoints = 120;
    this->maxEnergyPoints = 120;
    this->level = 1;
    this->name = name;
    this->meleeAttackDamage = 60;
    this->rangedAttackDamage = 5;
    this->armorDamageReduction = 0;
}

void    NinjaTrap::ninjaShoebox(FragTrap &trap)
{
    std::cout << "Ninja summons a ranged attack on himself from ";
    std::cout << trap.getName() << "." << std::endl;
    trap.rangedAttack(this->name);
}

void    NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
    std::cout << "Ninja summons a melee attack on himself from ";
    std::cout << trap.getName() << "." << std::endl;
    trap.meleeAttack(this->name);
}

void    NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
    std::cout << "Ninja damage a melee ";
    std::cout << trap.getName() << "." << std::endl;
    trap.takeDamage(this->meleeAttackDamage);
}

void    NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
    std::cout << "Ninja goes to " << trap.getName();
    std::cout << " aid" << std::endl;
    trap.beRepaired(21);
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "Ninja " << this->name << " is dead!" << std::endl;
}