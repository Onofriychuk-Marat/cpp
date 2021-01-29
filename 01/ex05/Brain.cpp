#include "Brain.hpp"

Brain::Brain(void)
{

}

std::string Brain::identify(void) const
{
    std::stringstream brain;

    brain << this;
    return (brain.str());
}

Brain::~Brain(void)
{

}