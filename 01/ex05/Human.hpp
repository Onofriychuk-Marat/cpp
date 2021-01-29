#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
    Brain brain;

public:
    Human(void);
    std::string identify(void) const;
    Brain       &getBrain(void);
    ~Human(void);
};

#endif