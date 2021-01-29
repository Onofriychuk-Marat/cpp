#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character: public ICharacter
{
private:
    std::string name;
    int         count_materia;
    AMateria    *inventory[4];

    Character();
    void fillNull(void);
    void fill(const Character &character);

public:
    Character(std::string const &name);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

    Character(const Character &character);
    Character &operator=(const Character &character);
};

#endif