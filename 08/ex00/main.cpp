#include <exception>
#include <iostream>
#include <set>

#include "easyfind.hpp"

int main(void)
{
	std::array<int, 4> a = {0, 1, 2, 3};

	for (int i = 0; i <= 8; i++)
	{
		try
		{
			std::cout << "Result: " << easyfind(a, i) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Not find " << i << std::endl;
		}
	}
}