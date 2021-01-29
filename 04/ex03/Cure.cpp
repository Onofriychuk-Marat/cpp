#include "Cure.hpp"

Cure::Cure(): 
    AMateria("cure") {}

Cure::Cure(Cure const &cure):
	AMateria("cure")
{
	this->xp = cure.xp;
}

Cure &Cure::operator=(Cure &cure)
{
    this->xp = cure.xp;
    return (*this);
}

Cure::~Cure() {}

AMateria*   Cure::clone() const
{
    return (new Cure(*this));
}

void        Cure::use(ICharacter &target)
{

    AMateria::use(target);
	std::cout << "* heals " << target.getName();
    std::cout << "’s wounds *" << std::endl;
}