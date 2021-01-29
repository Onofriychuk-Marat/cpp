#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine: public ISpaceMarine
{
private:

public:
    TacticalMarine();
    virtual ~TacticalMarine();
    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;

    TacticalMarine(const TacticalMarine &tacticalmarine);
    TacticalMarine &operator=(const TacticalMarine &tacticalmarine);
};

#endif