#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#define COUNT_CHALLENGES 5

class ScavTrap: virtual public ClapTrap
{
private:
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