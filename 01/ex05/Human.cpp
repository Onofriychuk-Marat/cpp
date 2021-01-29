#include "Human.hpp"

Human::Human(void)
{
}

std::string Human::identify(void) const
{
    return (this->brain.identify());
}

Brain      &Human::getBrain(void)
{
    Brain &brain = this->brain;
    return (brain);
}

Human::~Human(void)
{
}