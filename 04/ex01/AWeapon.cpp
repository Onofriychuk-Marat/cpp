#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
    this->name = name;
    this->apcost = apcost;
    this->damage = damage;
}

AWeapon::AWeapon(const AWeapon &aweapon)
{
    this->name = aweapon.name;
    this->apcost = aweapon.apcost;
    this->damage = aweapon.damage;
}

AWeapon &AWeapon::operator=(const AWeapon &aweapon)
{
    this->name = aweapon.name;
    this->apcost = aweapon.apcost;
    this->damage = aweapon.damage;
    return (*this);
}

AWeapon::~AWeapon() {}

int     AWeapon::getAPCost() const
{
    return (this->apcost);
}

int     AWeapon::getDamage() const
{
    return (this->damage);
}

std::string const &AWeapon::getName() const
{
    return (this->name);
}