#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 fixed_point;
    static const int    fractional_bits = 8;

public:

    Fixed(void);
    Fixed(const Fixed &fixed);
    ~Fixed(void);
    int             getRawBits(void) const;
    void            setRawBits(int const raw);
    Fixed           &operator=(const Fixed &f2);
};

#endif