#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name):
    ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
    std::cout << "SuperTrap " << name << " created." << std::endl;
    this->hitPoints = FragTrap::hitPoints;
    this->maxHitPoints = FragTrap::maxHitPoints;
    this->energyPoints = NinjaTrap::energyPoints;
    this->maxEnergyPoints = NinjaTrap::maxEnergyPoints;
    this->level = 1;
    this->name = name;
    this->meleeAttackDamage = NinjaTrap::meleeAttackDamage;
    this->rangedAttackDamage = FragTrap::rangedAttackDamage;
    this->armorDamageReduction = FragTrap::armorDamageReduction;
}

void SuperTrap::rangedAttack(std::string target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string target)
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap(void)
{
    std::cout << "SuperTrap " << this->name << " is dead!" << std::endl;
}