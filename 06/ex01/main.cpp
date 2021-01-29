#include "Data.hpp"

void    fill(char *data)
{
    std::string symbols;

    symbols = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz0123456789";
    for (int i = 0; i < 8; i++)
        data[i] = symbols[rand() % symbols.length()];
}

void    *serialize(void)
{
    char        *data;

    data = new char[20];
    fill(data);
    *reinterpret_cast<int*>(data + 8) = rand();
    fill(data + 12);
    return (data);
}

Data    *deserialize(void *raw)
{
    Data *data;

    data = new Data();
    data->s1 = std::string(reinterpret_cast<char*>(raw), 8);
    data->n = *reinterpret_cast<int*>(reinterpret_cast<char*>(raw) + 8);
    data->s2 = std::string(reinterpret_cast<char*>(raw) + 12, 8);
    return (data);
}

int main(void)
{
    void *s;
    Data *data;

    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        std::cout << "----" << std::endl;
        s = serialize();
        data = deserialize(s);
        std::cout << "s1 = " << data->s1 << std::endl;
        std::cout << "n = " << data->n << std::endl;
        std::cout << "s2 = " << data->s2 << std::endl;
        delete reinterpret_cast<char*>(s);
        delete data;
    }
    return (0);
}