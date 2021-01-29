#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: virtual public AMateria
{
private:

public:
    Ice();
    ~Ice();
    AMateria*   clone() const;
    void        use(ICharacter &);

    Ice(const Ice &ice);
    Ice &operator=(const Ice &ice);
};

#endif