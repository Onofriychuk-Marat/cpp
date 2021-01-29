#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cctype>

template <typename T>
class Array
{
private:
    T       *array;
    size_t  length;

    void    copy(const Array <T> &);

public:
    Array();
    Array(size_t size);
    Array(Array<T> const &);
    ~Array();

    class IndexError: public std::exception {
        const char *what() const throw();
    };

    Array   &operator=(const Array<T> &);
    T       &operator[](int);
    size_t  size() const;
};

#include "Array.ipp"

#endif