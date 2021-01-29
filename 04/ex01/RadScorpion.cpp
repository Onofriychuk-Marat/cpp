#include "RadScorpion.hpp"

RadScorpion::RadScorpion() :
    Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &radscorpion) :
    Enemy(radscorpion)
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &radscorpion)
{
    this->type = radscorpion.type;
	this->hp = radscorpion.hp;
	return (*this);
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}
