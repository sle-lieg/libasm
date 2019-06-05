#include <iostream>

class A {
public:
	A(int n) : _n(n) {}
	void f1(int n) { std::cout << "f1: " << _n + 1 << std::endl; };
	void f2(int n) { std::cout << "f2: " << _n + 2 << std::endl; };
	void f3(int n) { std::cout << "f3: " << _n + 3 << std::endl; };

private:
	int _n;
};

typedef void (A::*func)(int);

struct S {
	// void (A::*fptr)(int);	
	func fptr;
};

int main()
{
	A a(1);
	A b(2);

	S tab[3] = {
		{&A::f1},
		{&A::f2},
		{&A::f3}
	};

	for (int i = 0; i < 3; i++) {
		(a.*tab[i].fptr)(i);
		(b.*tab[i].fptr)(i);
		// std::invoke(tab[i].fptr, a, i); //c++17
		// std::invoke(tab[i].fptr, b, i); //c++17
	}
}