#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const fixed_point)
{
    this->fixed_point = fixed_point << Fixed::fractional_bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value)
{
	this->fixed_point = roundf(value * (1 << Fixed::fractional_bits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    this->fixed_point = fixed.getRawBits();
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    return (this->fixed_point);
}

void    Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

Fixed   &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->fixed_point = fixed.getRawBits();
    return (*this);
}

float   Fixed::toFloat(void) const
{
	return ((float)this->fixed_point / (float)(1 << Fixed::fractional_bits));
}

int     Fixed::toInt(void) const
{
	return (this->fixed_point >> Fixed::fractional_bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
    out << fixed.toFloat();
    return (out);
}
