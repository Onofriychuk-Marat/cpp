#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource: public IMateriaSource
{
private:
    int     count_materia;
    AMateria *sources[4];

    void fillNull(void);
    void fill(const MateriaSource &materiasource);

public:
    MateriaSource();
    ~MateriaSource();
    void        learnMateria(AMateria*);
    AMateria*   createMateria(std::string const & type);

    MateriaSource(const MateriaSource &materiasource);
    MateriaSource &operator=(const MateriaSource &materiasource);
};

#endif