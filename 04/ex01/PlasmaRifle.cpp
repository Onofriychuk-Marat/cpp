#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : 
    AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmarifle) :
    AWeapon(plasmarifle) {}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &plasmarifle)
{
    this->name = plasmarifle.name;
	this->apcost = plasmarifle.apcost;
	this->damage = plasmarifle.damage;
	return (*this);
}

void    PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {}