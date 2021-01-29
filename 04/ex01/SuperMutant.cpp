#include "SuperMutant.hpp"

SuperMutant::SuperMutant() :
    Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& supermutant) :
    Enemy(supermutant)
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}
SuperMutant &SuperMutant::operator=(const SuperMutant& supermutant)
{
	this->type = supermutant.type;
	this->hp = supermutant.hp;
	return (*this);
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
