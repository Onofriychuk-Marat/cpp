#include "Pony.hpp"

void    ponyOnTheHeap(void)
{
    Pony *pony;
    
    pony = new (std::nothrow) Pony;
    pony->set_name("Maks");
    pony->set_age(25);
    pony->set_speed(250);
    pony->set_wing_size(3);
    pony->takeof();
    delete pony;
    pony = 0;
}

void    ponyOnTheStack(void)
{
    Pony pony;

    pony.set_name("Job");
    pony.set_age(10);
    pony.set_speed(50);
    pony.set_wing_size(100);
    pony.takeof();
}

int     main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}