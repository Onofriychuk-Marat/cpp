#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string name;
    std::string title;

    Sorcerer();

public:
    Sorcerer(std::string name, std::string title);
    std::string const   &getName(void) const;
    std::string const   &getTitle(void) const;
    void                polymorph(Victim const &victim) const;
    ~Sorcerer(void);

    Sorcerer(const Sorcerer &sorcerer);
    Sorcerer &operator=(const Sorcerer &sorcerer);
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif