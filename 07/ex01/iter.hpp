#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void iter(T const *, int, void (*f)(T const &));
template <typename T> void print(T const &);

#include "iter.ipp"

#endif