#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class   MutantStack : public std::stack<T>
{
private:

public:
    MutantStack() : std::stack<T>() {};
    virtual ~MutantStack() {};

    typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin();
    iterator end();
};

#include "mutantstack.ipp"

#endif