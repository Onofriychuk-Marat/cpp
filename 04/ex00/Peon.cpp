#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &other) : Victim(other.name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(const Peon &peon)
{
    this->name = peon.getName();
    return (*this);
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
}