#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: virtual public AMateria
{
private:

public:
    Cure();
    ~Cure();
    AMateria*   clone() const;
    void        use(ICharacter &);

    Cure(Cure const &cure);
    Cure &operator=(Cure &cure);
};

#endif