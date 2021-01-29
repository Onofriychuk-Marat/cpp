#include "Character.hpp"

Character::Character(std::string const &name)
{
    this->name = name;
    this->weapon = NULL;
    this->ap = 40;
}

Character::Character(const Character &character)
{
    this->name = character.name;
    this->weapon = character.weapon;
    this->ap = character.ap;
}

Character &Character::operator=(const Character &character)
{
    this->name = character.name;
    this->weapon = character.weapon;
    this->ap = character.ap;
    return (*this);
}

Character::~Character() {}

void    Character::recoverAP()
{
    this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}

void    Character::equip(AWeapon *weapon)
{
    this->weapon = weapon;
}

void    Character::attack(Enemy *enemy)
{
    if (this->weapon && this->weapon->getAPCost() <= this->ap)
    {
        this->ap -= this->weapon->getAPCost();
        std::cout << this->name << " attacks " << enemy->getType();
        std::cout << " with a " << this->weapon->getName() << std::endl;
        this->weapon->attack();
        enemy->takeDamage(this->weapon->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

int     Character::getAP() const
{
    return (this->ap);
}

AWeapon const *Character::getWeapon() const
{
    return (this->weapon);
}

std::ostream &operator<<(std::ostream &out, const Character &character)
{
    out << character.getName() << " has " << character.getAP();
    if (character.getWeapon())
        out << " and wields a " << character.getWeapon()->getName();
    else
        out << " and is unarmed";
    out << std::endl;
    return (out);
}

std::string const &Character::getName() const
{
    return (this->name);
}