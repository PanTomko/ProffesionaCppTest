#include <list>
#include <iostream>

using namespace std;

template<class T>
void print(T start, T end)
{
	while (start != end)
	{
		std::cout << *start << " ";
		start++;
	}
}

class A {
	// private
	int a;
public:
	A(int a) : a(a) {}
	operator int() const { return a; }
	int getA() const { return a; }
};

struct R {
	int val;
	R(int v) : val(v) {}
	bool operator()(const A & a) { return a > val; }
};

int main()
{
	list<A> l1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	R r(4);
	l1.remove_if(r);

	print(l1.begin(), l1.end());

	std::cin.ignore();
	return 0;
}