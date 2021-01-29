#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <array>

template <typename T>
int easyfind(T &mas, int element)
{
    typename T::iterator i;

    i = std::find(mas.begin(), mas.end(), element); 
    if (i == mas.end())
        throw std::exception();
    return (*i);
}

#endif