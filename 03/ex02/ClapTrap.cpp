#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap " << name << " created." << std::endl;
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->name = name;
    this->meleeAttackDamage = 30;
    this->rangedAttackDamage = 20;
    this->armorDamageReduction = 5;
}

void    ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << this->name;
    std::cout << " attacks " << target << " at range, ";
    std::cout << "causing " << this->rangedAttackDamage;
    std::cout <<  " points of damage!" << std::endl;
}

void    ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << this->name;
    std::cout << " attacks " << target << " at melee, ";
    std::cout << "causing " << this->meleeAttackDamage;
    std::cout << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int damage;
    
    damage = amount - this->armorDamageReduction;
    this->hitPoints -= damage;
    if (damage <= 0)
    {
        std::cout << this->name << " was saved by armor!" << std::endl;
        return ;
    }
    std::cout << "Oh no! " << this->name << " been dealt ";
    std::cout << damage << " damage!" << std::endl;
    if (this->hitPoints > 0)
        return ;
    std::cout << this->name << " is dead!" << std::endl;
    this->hitPoints = 0;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->name << " hit points increased by " << amount << std::endl;
    this->hitPoints += amount;
    if (this->hitPoints > this->maxHitPoints)
        this->hitPoints = this->maxHitPoints;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
}

