#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_point = fixed.getRawBits();
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}

void    Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixed_point = fixed.getRawBits();
    return (*this);
}