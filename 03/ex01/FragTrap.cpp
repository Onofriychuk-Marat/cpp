#include "FragTrap.hpp"

std::string FragTrap::weapons[COUNT_WEAPONS] = {
    "knife",
    "credit card",
    "pencil",
    "headphones",
    "ruler"
};

FragTrap::FragTrap(std::string name)
{
    std::cout << "FR4G-TP " << name;
    std::cout << " is born and ready to kill!" << std::endl;
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

void    FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name;
    std::cout << " attacks " << target << " at range, ";
    std::cout << "causing " << this->rangedAttackDamage;
    std::cout <<  " points of damage!" << std::endl;
}

void    FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << this->name;
    std::cout << " attacks " << target << " at melee, ";
    std::cout << "causing " << this->meleeAttackDamage;
    std::cout << " points of damage!" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
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

void    FragTrap::beRepaired(unsigned int amount)
{
    std::cout << this->name << " hit points increased by " << amount << std::endl;
    this->hitPoints += amount;
    if (this->hitPoints > this->maxHitPoints)
        this->hitPoints = this->maxHitPoints;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    if (this->energyPoints < 25)
    {
        std::cout << "Not enough energy points!" << std::endl;
        return ;
    }
    this->energyPoints -= 25;
    std::cout << "FR4G-TP " << this->name;
    std::cout << " attacks " << target << " at melee with ";
    std::cout << FragTrap::weapons[rand() % COUNT_WEAPONS];
    std::cout << ", causing " << this->meleeAttackDamage;
    std::cout << " points of damage!" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FR4G-TP " << this->name << " is dead!" << std::endl;
}

