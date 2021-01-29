#ifndef SPAN_HPP
#define SPAN_HPP

#include <cctype>
#include <vector>
#include <set>
#include <iterator>
#include <iostream>
#include <cmath>
#include <algorithm>

class Span
{
private:
    size_t              max_size;
    std::multiset<int>  array;
    Span();

public:
    Span(size_t max_size);
    void    addNumber(int value);
    void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    size_t  shortestSpan(void);
    size_t  longestSpan(void);

    class ErrorArrayFull : public std::exception {
        const char* what() const throw();
    };

    class ErrorSize : public std::exception {
        const char* what() const throw();
    };

};

#endif