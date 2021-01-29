#include "Pony.hpp"

int     Pony::istakeof(void)
{
    if (age < 20 || age > 45)
        return (0);
    if (wing_size > 4 || wing_size < 2)
        return (0);
    if (speed < 100 || speed > 400)
        return (0);
    return (1);
}

void     Pony::takeof(void)
{
    if (istakeof())
    {
        std::cout << "Pony " << name << " took off!" << std::endl;
    }
    else
    {
        std::cout << "Pony " << name << " did not take off!" << std::endl;
    }
}

void        Pony::set_name(std::string name)
{
    this->name = name;
}

void        Pony::set_age(int age)
{
    this->age = age;
}

void        Pony::set_wing_size(int wing_size)
{
    this->wing_size = wing_size;
}

void        Pony::set_speed(int speed)
{
    this->speed = speed;
}

std::string Pony::get_name(void)
{
    return (this->name);
}

int         Pony::get_age(void)
{
    return (this->age);
}

int        Pony::get_wing_size(void)
{
    return (this->wing_size);
}

int         Pony::get_speed(void)
{
    return (this->speed);
}

Pony::Pony()
{
    std::cout << "Pony was born!" << std::endl;
}

Pony::~Pony()
{
    std::cout << "The " << name << " died a hero!" << std::endl;
}