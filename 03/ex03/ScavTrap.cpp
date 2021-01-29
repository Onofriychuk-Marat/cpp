#include "ScavTrap.hpp"

std::string ScavTrap::challenges[COUNT_CHALLENGES] = {
    "Pass cube3d with bonuses!",
    "Reach level 21!",
    "Сatch the cheater!",
    "Pass the minishell on the first try!",
    "Make it to the internship!"
};

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "Guard " << name;
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

void    ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "Guard " << this->name;
    std::cout << " attacks " << target << " at range, ";
    std::cout << "causing " << this->rangedAttackDamage;
    std::cout <<  " points of damage!" << std::endl;
}

void    ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "Guard " << this->name;
    std::cout << " attacks " << target << " at melee, ";
    std::cout << "causing " << this->meleeAttackDamage;
    std::cout << " points of damage!" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
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

void    ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << this->name << " hit points increased by " << amount << std::endl;
    this->hitPoints += amount;
    if (this->hitPoints > this->maxHitPoints)
        this->hitPoints = this->maxHitPoints;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
    if (this->energyPoints < 25)
    {
        std::cout << "Not enough energy points!" << std::endl;
        return ;
    }
    this->energyPoints -= 25;
    std::cout << "Guard gives the task to " << target << ". ";
    std::cout << ScavTrap::challenges[rand() % COUNT_CHALLENGES] << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Guard " << this->name << " is dead!" << std::endl;
}

