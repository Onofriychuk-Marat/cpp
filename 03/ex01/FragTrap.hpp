#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#define COUNT_WEAPONS 5

class FragTrap 
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
    static std::string  weapons[COUNT_WEAPONS];

    FragTrap();

public:
    FragTrap(std::string name);
    void    rangedAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    vaulthunter_dot_exe(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    ~FragTrap(void);
};

#endif