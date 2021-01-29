#include "transfer.hpp"

bool        Transfer::isInf(std::string type)
{
    if (type == "inf" ||
        type == "+inf" ||
        type == "-inf")
        return (true);
    return (false);
}

template <typename T>
std::string Transfer::toString(T val)
{
    std::ostringstream ost;
    ost << val;
    return (ost.str());
}

std::string Transfer::addPointZero(std::string str, bool isFloat)
{
    if (str.find('.') != std::string::npos)
        return (str);
    if (isFloat)
        return (str + ".0f");
    return (str + ".0");
}

std::string Transfer::getType(std::string str)
{
    int     countPoint;
    bool    flagF;

    countPoint = 0;
    flagF = false;
    if (isInf(str) || str == "nan")
        return (str);
    for (int i = 0; i < str.size(); i++)
    {
        if (flagF)
            return ("impossible");
        if ((str[i] < '0' || str[i] > '9')
            && str[i] != '.' && str[i] != 'f' 
            && str[i] != '-' && str[i] != '+')
            return ("impossible");
        if (str[i] == '.')
            countPoint++;
        if ((str[i] == '-' || str[i] == '+') && i)
            return ("impossible");
        if (countPoint > 1)
            return ("impossible");
        if (str[i] == 'f')
            flagF = true;
    }
    if (countPoint && flagF)
        return ("float");
    if (countPoint)
        return ("double");
    if (str.size() > 8 || flagF)
        return ("impossible");
    return ("int");
}

Transfer::Transfer(std::string const & str)
{
    this->str = str;
    this->type = getType(str);
}

Transfer::Transfer(const Transfer & transfer)
{
    this->str = transfer.str;
    this->type = transfer.type;
}

Transfer &Transfer::operator=(const Transfer & transfer)
{
    this->str = transfer.str;
    this->type = transfer.type;
    return (*this);
}

Transfer::~Transfer() {}

std::string Transfer::getChar(void)
{
    int valInt;

    if (isInf(this->type) || this->type == "nan" || this->type == "impossible")
        return ("impossible");
    if (this->type == "float")
    {
        float val = std::atof(this->str.c_str());
        valInt = static_cast<int>(val);
        if ((valInt >= 0 && valInt < 32) || valInt == 127)
            return ("Non displayable");
        if (valInt > 127 || valInt < 0)
            return ("impossible");
        return ("'" + toString(static_cast<char>(val)) + "'");
    }
    if (this->type == "double")
    {
        double val = std::atof(this->str.c_str());
        valInt = static_cast<int>(val);
        if ((valInt >= 0 && valInt < 32) || valInt == 127)
            return ("Non displayable");
        if (valInt > 127 || valInt < 0)
            return ("impossible");
        return ("'" + toString(static_cast<char>(val)) + "'");
    }
    valInt = atoi(this->str.c_str());
    if ((valInt >= 0 && valInt < 32) || valInt == 127)
        return ("Non displayable");
    if (valInt > 127 || valInt < 0)
        return ("impossible");
    return ("'" + toString(static_cast<char>(valInt)) + "'");
}

std::string Transfer::getInt(void)
{
    if (isInf(this->type) || this->type == "nan" || this->type == "impossible")
        return ("impossible");
    if (this->type == "float")
    {
        float val = std::atof(this->str.c_str());
        return (toString(static_cast<int>(val)));
    }
    if (this->type == "double")
    {
        double val = std::atof(this->str.c_str());
        return (toString(static_cast<int>(val)));
    }
    return (toString(atoi(this->str.c_str())));
}

std::string Transfer::getFloat(void)
{
    if (isInf(this->type))
        return (this->type);
    if (this->type == "impossible")
        return ("impossible");
    if (this->type == "nan" || this->type == "nanf")
        return ("nanf");
    if (this->type == "int")
    {
        int val = std::atoi(this->str.c_str());
        return (addPointZero(toString(static_cast<float>(val)), true));
    }
    if (this->type == "double")
    {
        double val = std::atof(this->str.c_str());
        return (toString(static_cast<float>(val)) + "f");
    }
    float result = std::atof(this->str.c_str());
    return (toString(result) + "f");
}

std::string Transfer::getDouble(void)
{
    if (isInf(this->type))
        return (this->type);
    if (this->type == "impossible")
        return ("impossible");
    if (this->type == "nan" || this->type == "nanf")
        return ("nan");
    if (this->type == "int")
    {
        int val = std::atoi(this->str.c_str());
        return (addPointZero(toString(static_cast<double>(val)), false));
    }
    if (this->type == "float")
    {
        float val = std::atof(this->str.c_str());
        return (toString(static_cast<double>(val)));
    }
    double result = std::atof(this->str.c_str());
    return (toString(result));
}