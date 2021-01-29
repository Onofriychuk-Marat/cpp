#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator: public ISpaceMarine
{
private:

public:
    AssaultTerminator();
    virtual ~AssaultTerminator();
    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;

    AssaultTerminator(const AssaultTerminator &assaultterminator);
    AssaultTerminator &operator=(const AssaultTerminator &assaultterminator);
};

#endif