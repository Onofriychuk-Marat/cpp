#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "Some random victim called ";
    std::cout << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &victim)
{
    this->name = victim.name;
    std::cout << "Some random victim called ";
    std::cout << name << " just appeared!" << std::endl;    
}

Victim &Victim::operator=(const Victim &victim)
{
    this->name = victim.name;
    return (*this);
}

void Victim::getPolymorphed(void) const
{
    std::cout << this->name;
    std::cout << " has been turned into a cute little sheep!";
    std::cout << std::endl;
}

std::string const &Victim::getName(void) const
{
    return (this->name);
}

std::ostream &operator<<(std::ostream &out, Victim const &victim)
{
    out << "I'm " << victim.getName();
    out << " and I like otters!" << std::endl;
    return (out);
}

Victim::~Victim(void)
{
    std::cout << "Victim " << this->name;
    std::cout << " just died for no apparent reason!" << std::endl;
}