#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
private:
    AWeapon();

protected:
    std::string name;
    int         apcost;
    int         damage;

public:
    AWeapon(std::string const & name, int apcost, int damage);
    virtual ~AWeapon();
    std::string const &getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;

    AWeapon(const AWeapon& aweapon);
    AWeapon &operator=(const AWeapon& aweapon);
};

#endif