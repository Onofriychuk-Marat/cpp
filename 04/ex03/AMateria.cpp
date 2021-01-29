#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    this->type = type;
    this->xp = 0;
}

AMateria::AMateria(const AMateria &amateria)
{
    this->type = amateria.type;
    this->xp = amateria.xp;
}

AMateria &AMateria::operator=(const AMateria &amateria)
{
    this->type = amateria.type;
    this->xp = amateria.xp;
    return (*this);
}

AMateria::~AMateria() {}

std::string const   &AMateria::getType() const
{
    return (this->type);
}

unsigned int        AMateria::getXP() const
{
    return (this->xp);
}

void                AMateria::use(ICharacter &)
{
    this->xp += 10;
}

