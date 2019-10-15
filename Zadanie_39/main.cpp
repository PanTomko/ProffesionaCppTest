#include <iostream>

using namespace std;

class B {};

template<class T>
class A {
	T _v;
public:
	A(T v);
};

template<class T>
A::A(T v) :_v(v) {}

// poprawnie by bylo z A<T>::A !! Moze pomylka ? Ale raczej nie.

int main()
{
	A<int> a(2);
	cout << 1 << endl;
	std::cin.ignore(); // extra line
	return 0;
}