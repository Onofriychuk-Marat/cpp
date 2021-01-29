#include "iter.hpp"

class Awesome
{
public:
    Awesome (void): _n (42) {return; }
    int get (void) const {return this -> _n; }

private:
    int _n;
};

std :: ostream & operator << (std :: ostream & o, Awesome const & rhs)
{
    o << rhs.get(); return o; 
}


int main(void)
{
    {
        int mas[5] = {1, 2, 3};
        iter(mas, 3, &print);
    }
    std::cout << std::endl;
    {
        double mas[5] = {0.1, 0.2, 0.3};
        iter(mas, 3, &print);
    }
    std::cout << std::endl;
    {
        bool mas[3] = { false, true, true };
        iter(mas, 3, &print);
    }
    std::cout << std::endl;
    {
        std::string mas[5] = {"one", "two", "three"};
        iter(mas, 3, &print);
    }

    std::cout << "--------------------------------------------" << std::endl;

    int tab [] = {0, 1, 2, 3, 4}; // <--- I still don't understand why you can't write int [] tab. Wouldn't that make more sense?
    Awesome tab2 [5];

    iter (tab, 5, print);
    iter (tab2, 5, print);
    return (0);
}