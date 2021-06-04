#include <iostream>
#include <time.h>

class Base
{
	public:
		virtual ~Base(){}
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base*	generate() {
	int irand = rand() % 3;
	if (irand == 0)
		return (new A);
	else if (irand == 1)
		return (new B);
	else if (irand == 2)
		return (new C);
	return (NULL);
}

void	identify_from_pointer(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void	identify_from_reference(Base & p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A\n";
	}
	catch (std::bad_cast &e)
	{}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B\n";
	}
	catch (std::bad_cast &e)
	{}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C\n";
	}
	catch (std::bad_cast &e)
	{}
}

int main(void)
{
	srand(time(NULL));
	Base *base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
}