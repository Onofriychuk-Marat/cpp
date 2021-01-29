#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
private:

public:
    PowerFist(void);
    virtual ~PowerFist();
    void attack(void) const;

    PowerFist(const PowerFist &powerfist);
    PowerFist &operator=(const PowerFist &powerfist);
};

#endif