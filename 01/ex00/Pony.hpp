#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <iomanip>

class Pony
{
private:
    std::string name;
    int         age;
    int         wing_size;
    int         speed;

    int         istakeof(void);

public:
    void        takeof(void);
    void        set_name(std::string name);
    void        set_age(int age);
    void        set_wing_size(int age);
    void        set_speed(int speed);
    std::string get_name(void);
    int         get_age(void);
    int         get_wing_size(void);
    int         get_speed(void);
    Pony();
    ~Pony();
};

#endif