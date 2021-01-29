#include "Ice.hpp"

Ice::Ice(): 
    AMateria("ice") {}

Ice::Ice(Ice const &ice):
	AMateria("ice")
{
	this->xp = ice.xp;
}

Ice &Ice::operator=(const Ice &ice)
{
	this->xp = ice.xp;
	return (*this);
}

Ice::~Ice() {}

AMateria*   Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at ";
    std::cout << target.getName() << " *" << std::endl;
}