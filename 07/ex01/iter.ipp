template <typename T>
void    iter(T const *mas, int size, void (*f)(T const &))
{
    for (int i = 0; i < size; i++)
        f(mas[i]);
}

template <typename T>
void    print(T const &value)
{
    std::cout << "Print: " << value << std::endl;
}