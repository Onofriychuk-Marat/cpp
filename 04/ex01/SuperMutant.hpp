#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:

public:
    SuperMutant();
    virtual ~SuperMutant();
    void takeDamage(int damage);

    SuperMutant(const SuperMutant& supermutant);
    SuperMutant &operator=(const SuperMutant& supermutant);
};

#endif