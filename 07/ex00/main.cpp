#include "template.hpp"

class	Awesome {
private:
	int		a;
	std::string	id;
public:
	Awesome(int a, std::string id): a(a), id(id) {}
	bool operator<(const Awesome &rhs) { return a < rhs.a; }
	bool operator>(const Awesome &rhs) { return a > rhs.a; }
	bool operator<=(const Awesome &rhs) { return a <= rhs.a; }
	bool operator>=(const Awesome &rhs) { return a >= rhs.a; }
	bool operator==(const Awesome &rhs) { return a == rhs.a; }
	bool operator!=(const Awesome &rhs) { return a != rhs.a; }
	int			get() const {return a;}
	std::string	get_id() const {return id;}
};

int main( void )
{
    {
        int a = 2;
        int b = 3;

        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;

    Awesome a(1, "one");
    Awesome b(2, "two");

    ::swap(a, b);
    std::cout << "a) a: " << a.get() << ", id: " << a.get_id() << std::endl;
    std::cout << "b) a: " << b.get() << ", id: " << b.get_id() << std::endl;
    return 0;
}