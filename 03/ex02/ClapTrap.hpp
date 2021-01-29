#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    int                 hitPoints;
    int                 maxHitPoints;
    int                 energyPoints;
    int                 maxEnergyPoints;
    int                 level;
    std::string         name;
    int                 meleeAttackDamage;
    int                 rangedAttackDamage;
    int                 armorDamageReduction;

    ClapTrap();

public:
    ClapTrap(std::string name);
    void    rangedAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    ~ClapTrap(void);
};

#endif