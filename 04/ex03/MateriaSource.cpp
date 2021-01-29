#include "MateriaSource.hpp"

void    MateriaSource::fillNull(void)
{
    for (int i = 0; i < 4; i++)
        this->sources[i] = nullptr;
}

void    MateriaSource::fill(const MateriaSource &materiasource)
{
    for (int i = 0; i < materiasource.count_materia; i++)
		this->learnMateria(materiasource.sources[i]->clone());
}

MateriaSource::MateriaSource()
{
    this->count_materia = 0;
    fillNull();
}

MateriaSource::MateriaSource(const MateriaSource &materiasource)
{
    this->count_materia = 0;
    fillNull();
    fill(materiasource);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiasource)
{
    for (int i = 0; i < this->count_materia; i++)
        delete this->sources[i];
    this->count_materia = 0;
    fillNull();
    fill(materiasource);
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->count_materia; i++)
        delete this->sources[i];
}

void        MateriaSource::learnMateria(AMateria* materia)
{
    if (this->count_materia >= 4 || !materia)
        return ;
    for (int i = 0; i < this->count_materia; i++)
    {
        if (this->sources[i] == materia)
            return ;
    }
    this->sources[this->count_materia++] = materia;
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->count_materia; i++)
    {
        if (this->sources[i]->getType() == type)
            return (this->sources[i]->clone());
    }
    return (nullptr);
}