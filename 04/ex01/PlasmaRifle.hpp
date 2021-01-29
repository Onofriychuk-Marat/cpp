#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
private:

public:
    PlasmaRifle(void);
    virtual ~PlasmaRifle();
    virtual void attack(void) const;

    PlasmaRifle(const PlasmaRifle &plasmarifle);
    PlasmaRifle &operator=(const PlasmaRifle &plasmaRifle);
};

#endif