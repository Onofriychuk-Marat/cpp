#include <iostream>

void    memoryLeak()
{
    std::string *panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete panther;
    panther = 0;
}

int     main(void)
{
    memoryLeak();
    return (0);
}