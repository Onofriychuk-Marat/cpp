#include <iostream>
#include <fstream>
#include <sstream>

std::string get_str_file(std::string name_file)
{
    std::ifstream       file(name_file);
    std::stringstream   str;
    std::string         tmp;

    while (getline(file, tmp))
        str << tmp << "\n";
    return (str.str());
}

void        update_str(std::string &str, std::string s1, std::string s2)
{
    int i;

    while ((i = str.find(s1)) != -1)
        str.replace(i, s1.length(), s2);
}

void        check_argv(int argc, char **argv)
{
    if (argc != 4 ||
    static_cast<std::string>(argv[2]).length() <= 0 ||
    static_cast<std::string>(argv[3]).length() <= 0)
    {
        std::cout << "Not valid arguments!" << std::endl;
        exit (1);
    }
}

void        write_str_to_file(std::string name_file, std::string str)
{
    std::ofstream    file(name_file + ".replace");

    file << str;
}

int         main(int argc, char **argv)
{
    std::string str;

    check_argv(argc, argv);
    str = get_str_file(argv[1]);
    update_str(str, argv[2], argv[3]);
    write_str_to_file(argv[1], str);
    return (0);
}