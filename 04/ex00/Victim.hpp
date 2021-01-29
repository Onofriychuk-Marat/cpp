#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
private:
    Victim();

protected:
    std::string name;

public:
    Victim(std::string name);
    virtual void getPolymorphed(void) const;
    std::string const &getName(void) const;
    virtual ~Victim(void);

    Victim(const Victim &victim);
    Victim &operator=(const Victim &victim);
};

std::ostream &operator<<(std::ostream &out, Victim const &victim);

#endif