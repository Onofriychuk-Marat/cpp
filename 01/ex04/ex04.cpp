#include <iostream>

int     main(void)
{
    std::string str = "HI THIS IS BRAIN";

	std::string &ref = str;
	std::cout << "Refernce: " << ref << std::endl;

	std::string	*p = &str;
	std::cout << "Pointer: " << *p << std::endl;
    return (0);
}