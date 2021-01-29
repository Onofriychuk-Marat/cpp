#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
private:
    NinjaTrap();

public:
    NinjaTrap(std::string name);
    void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
	void ninjaShoebox(ClapTrap &trap);
	void ninjaShoebox(NinjaTrap &trap);
    ~NinjaTrap(void);
};

#endif