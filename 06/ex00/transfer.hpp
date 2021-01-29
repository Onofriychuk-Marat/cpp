#ifndef TRANSFER_HPP
#define TRANSFER_HPP

#include <iostream>
#include <sstream>

class Transfer
{
private:
    std::string str;
    std::string type;

    Transfer();
    std::string getType(std::string);
    bool        isInf(std::string);
    std::string addPointZero(std::string, bool);
    template <typename T> std::string toString(T);

public:
    Transfer(std::string const &);
    ~Transfer();
    std::string getChar(void);
    std::string getInt(void);
    std::string getFloat(void);
    std::string getDouble(void);

    Transfer(const Transfer &);
    Transfer &operator=(const Transfer &);
};

#endif