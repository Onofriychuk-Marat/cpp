#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
#define COUNT_WEAPONS 5

class FragTrap: virtual public ClapTrap
{
private:
    static std::string  weapons[COUNT_WEAPONS];

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