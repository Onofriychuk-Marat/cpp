#include "transfer.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: bad arguments" << std::endl;
        return (1);
    }
    std::string str(argv[1]);
    Transfer    transfer(str);
    std::cout << "char: " << transfer.getChar() << std::endl;
    std::cout << "int: " << transfer.getInt() << std::endl;
    std::cout << "float: " << transfer.getFloat() << std::endl;
    std::cout << "double: " << transfer.getDouble() << std::endl;
    return (0);
}