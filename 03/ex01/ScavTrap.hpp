#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#define COUNT_CHALLENGES 5

class ScavTrap
{
private:
    int                 hitPoints;
    int                 maxHitPoints;
    int                 energyPoints;
    int                 maxEnergyPoints;
    int                 level;
    std::string         name;
    int                 meleeAttackDamage;
    int                 rangedAttackDamage;
    int                 armorDamageReduction;
    static std::string  challenges[COUNT_CHALLENGES];

    ScavTrap();
    
public:
    ScavTrap(std::string name);
    void    rangedAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    challengeNewcomer(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    ~ScavTrap(void);
};

#endif