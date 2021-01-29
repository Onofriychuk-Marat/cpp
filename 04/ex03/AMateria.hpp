#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
    AMateria();
protected:
    unsigned int    xp;
    std::string     type;

public:
    AMateria(std::string const & type);
    virtual ~AMateria();
    std::string const & getType() const;
    unsigned int getXP() const; 
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter&);

    AMateria(const AMateria &amateria);
    AMateria &operator=(const AMateria &amateria);
};

#endif