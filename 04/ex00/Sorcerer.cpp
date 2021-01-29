#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout << name << ", " << title;
    std::cout << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &sorcerer)
{
    this->name = sorcerer.name;
    this->title = sorcerer.title;
	std::cout << name << ", " << title;
    std::cout << ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &sorcerer)
{
	this->name = sorcerer.name;
	this->title = sorcerer.title;
	return (*this);
}

std::string const &Sorcerer::getName(void) const
{
    return (this->name);
}

std::string const &Sorcerer::getTitle(void) const
{
    return (this->title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
    out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle();
    out << ", and I like ponies!" << std::endl;
    return (out);
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->name << ", " << this->title;
    std::cout << ", is dead. Consequences will never be the same!" << std::endl;
}
