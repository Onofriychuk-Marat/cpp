#include "Squad.hpp"

void Squad::fill(const Squad &squad)
{
    for (int i = 0; i < squad.getCount(); i++)
		this->push(squad.getUnit(i)->clone());
}

void Squad::deleteSpace(void)
{
    if (this->spaceMarines)
    {
        for (int i = 0; i < this->count; i++)
        {
            delete this->spaceMarines[i];
        }
        delete [] this->spaceMarines;
    }
}

Squad::Squad()
{
    this->count = 0;
    this->spaceMarines = nullptr;
}

Squad::Squad(const Squad &squad)
{
    this->count = 0;
    this->spaceMarines = nullptr;
    fill(squad);
}

Squad &Squad::operator=(const Squad &squad)
{
    deleteSpace();
    this->spaceMarines = nullptr;
    this->count = 0;
    fill(squad);
    return (*this);
}

Squad::~Squad()
{
    deleteSpace();
}

int Squad::getCount() const
{
    return (this->count);
}

ISpaceMarine    *Squad::getUnit(int index) const
{
    if (index < 0 || index >= this->count)
        return (nullptr);
    return (spaceMarines[index]);
}

int             Squad::push(ISpaceMarine *spaceMarine)
{
    int i;
    ISpaceMarine **spaceMarines;

    this->count++;
    spaceMarines = new ISpaceMarine*[this->count];;
    for (i = 0; i < this->count - 1; i++)
        spaceMarines[i] = this->spaceMarines[i];
    spaceMarines[i] = spaceMarine;
    if (this->spaceMarines)
        delete [] this->spaceMarines;
    this->spaceMarines = spaceMarines;
    return (this->count);
}
