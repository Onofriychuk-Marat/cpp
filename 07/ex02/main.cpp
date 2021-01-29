#include <iostream>
#include "Array.hpp"

int main(void)
{
    Array<int> one;
    Array<int> two(10);

    try
    {
        std::cout << one[9] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < 10; i++)
        two[i] = i;
    
    Array<int> three = two;
    for (int i = 0; i < three.size(); i++)
        std::cout << three[i] << " ";
    std::cout << std::endl;

    Array<int> four(two);
    for (int i = 0; i < four.size(); i++)
        std::cout << four[i] << " ";
    std::cout << std::endl;

    return (0);
}