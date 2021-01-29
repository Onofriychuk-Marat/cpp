#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap: 
    public NinjaTrap, public FragTrap
{
private:

public:
    SuperTrap(std::string name);
    void    rangedAttack(std::string target);
    void    meleeAttack(std::string target);
    ~SuperTrap(void);

};

#endif