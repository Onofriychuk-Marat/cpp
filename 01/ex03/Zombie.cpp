#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    this->type = "middle";
}

Zombie::Zombie()
{}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

void    Zombie::set_type(std::string type)
{
    this->type = type;
}

void    Zombie::announce(void)
{
    std::cout << "<" << name << " (" << type;
    std::cout << ") Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{

}