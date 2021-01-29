template <typename T>
void    swap(T &one, T &two)
{
    T tmp(one);

    one = two;
    two = tmp;
}

template <typename T>
T       min(T one, T two)
{
    if (one == two || two < one)
        return (two);
    return (one);
}

template <typename T>
T       max(T one, T two)
{
    if (one == two || two > one)
        return (two);
    return (one);
}