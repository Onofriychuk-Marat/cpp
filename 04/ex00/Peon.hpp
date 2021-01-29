#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim
{
private:
    Peon();

public:
    Peon(std::string name);
    virtual void getPolymorphed(void) const;
    virtual ~Peon(void);

    Peon(const Peon &peon);
    Peon &operator=(const Peon &peon);
};

#endif