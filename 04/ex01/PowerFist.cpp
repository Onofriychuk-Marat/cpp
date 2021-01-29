#include "PowerFist.hpp"

PowerFist::PowerFist(void) : 
    AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(const PowerFist &powerfist) :
    AWeapon(powerfist) {}

PowerFist &PowerFist::operator=(const PowerFist &powerfist)
{
	this->name = powerfist.name;
	this->apcost = powerfist.apcost;
	this->damage = powerfist.damage;
	return (*this);
}

void    PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist() {}