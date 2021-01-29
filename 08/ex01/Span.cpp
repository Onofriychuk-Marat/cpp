#include "Span.hpp"

Span::Span(size_t max_size)
{
    this->max_size = max_size;
}

void    Span::addNumber(int value)
{
    if (this->array.size() == this->max_size)
        throw ErrorArrayFull();
    this->array.insert(value);
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while(begin != end)
    {
		addNumber(*begin++);
	}
}

size_t     Span::shortestSpan(void)
{
    std::multiset<int>::iterator    first;
    std::multiset<int>::iterator    next;
    std::multiset<int>::iterator    end;
    size_t                          span;

    if (this->array.size() <= 1)
        throw ErrorSize();
    first = this->array.begin();
    next = ++this->array.begin();
    end = this->array.end();
    span = abs(*first - *next);
    while (next != end)
    {
        if (abs(*first - *next) < span)
            span = abs(*first - *next);
        first++;
        next++;
    }
    return (span);
}

size_t     Span::longestSpan(void)
{
    size_t      span;
    long int    one;
    long int    two;

    if (this->array.size() <= 1)
        throw ErrorSize();
    one = *(--this->array.end());
    two = *this->array.begin();
    span = static_cast<size_t>(abs(one - two));
    return (span);
}


const char* Span::ErrorArrayFull::what() const throw()
{
    return ("Error: array full!");
}

const char* Span::ErrorSize::what() const throw()
{
    return ("Error: wrong size!");
}
