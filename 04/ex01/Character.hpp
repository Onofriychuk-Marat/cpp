#ifndef CHARACER_HPP
#define CHARACER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    std::string name;
    AWeapon     *weapon;
	int         ap;

    Character();

public:
    Character(std::string const & name);
    ~Character();
    void                recoverAP();
    void                equip(AWeapon*);
    void                attack(Enemy*);
    int                 getAP() const;
    std::string const   &getName() const;
    AWeapon const       *getWeapon() const;

    Character(const Character &character);
    Character &operator=(const Character &character);
};

std::ostream &operator<<(std::ostream &out, const Character &character);

#endif