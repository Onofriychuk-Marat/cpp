#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>

template <typename T> void  swap(T &one, T &two);
template <typename T> T     min(T one, T two);
template <typename T> T     max(T one, T two);

#include "template.ipp"

#endif