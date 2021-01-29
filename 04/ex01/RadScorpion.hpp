#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:
    RadScorpion();
    virtual ~RadScorpion();

    RadScorpion(const RadScorpion &radscorpion);
    RadScorpion &operator=(const RadScorpion &radscorpion);
};

#endif