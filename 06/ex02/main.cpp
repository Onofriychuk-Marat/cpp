#include <iostream>

class Base {
public:
	virtual ~Base() {};
};

class A : public Base
{
public:
	~A() {};
};

class B : public Base
{
public:
	~B() {};
};

class C : public Base
{
public:
	~C() {};
};

Base *generate(void)
{
	int option;
	
	option = rand() % 3;
	if (option == 0)
		return (new A);
	else if (option == 1)
		return (new B);
	else
		return (new C);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}

int main(void)
{
	Base *val;

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		val = generate();
		std::cout << "-----" << std::endl;
		identify_from_pointer(val);
		identify_from_reference(*val);
		delete val;
	}
	return (0);
}
