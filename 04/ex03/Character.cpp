#include "Character.hpp"

void    Character::fillNull(void)
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = nullptr;
}

void    Character::fill(const Character &character)
{
    for (int i = 0; i < character.count_materia; i++)
		this->equip(character.inventory[i]->clone());
}

Character::Character(std::string const &name)
{
    this->name = name;
    this->count_materia = 0;
    fillNull();
}

Character::Character(const Character &character)
{
    this->name = character.name;
    this->count_materia = 0;
    fillNull();
    fill(character);
}

Character &Character::operator=(const Character &character)
{
    this->name = character.name;
    for (int i = 0; i < this->count_materia; i++)
        delete this->inventory[i];
    this->count_materia = 0;
    fillNull();
    fill(character);
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < this->count_materia; i++)
        delete this->inventory[i];
}

std::string const   &Character::getName() const
{
    return (this->name);
}

void                Character::equip(AMateria* materia)
{
    if (this->count_materia >= 4 || !materia)
        return ;
    for (int i = 0; i < this->count_materia; i++)
    {
        if (this->inventory[i] == materia)
            return ;
    }
    this->inventory[this->count_materia++] = materia;
}

void                Character::unequip(int idx)
{
    if (idx < 0 || idx > this->count_materia - 1)
        return ;
    if (idx != this->count_materia - 1)
    {
        for (int i = idx; i < this->count_materia - 1; i++)
            this->inventory[i] = this->inventory[i + 1];
    }
    this->count_materia--;
    this->inventory[this->count_materia] = nullptr;
}

void                Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > this->count_materia - 1
        || !this->inventory[idx])
        return ;
    this->inventory[idx]->use(target);
}