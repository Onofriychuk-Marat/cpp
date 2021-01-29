#ifndef SQUARD_HPP
#define SQUARD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad: public ISquad
{
private:
    int count;
    ISpaceMarine **spaceMarines;

    void deleteSpace(void);
    void fill(const Squad &character);


public:
    Squad();
    virtual ~Squad();
    int getCount() const;
    ISpaceMarine    *getUnit(int index) const;
    int             push(ISpaceMarine*);

    Squad(const Squad &squad);
    Squad &operator=(const Squad &squad);
};

#endif