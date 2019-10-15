#include <iostream>

using namespace std;

class B {};

template<class T>
class A {
	T _v;
public:
	A() {}
	A(T v) : _v(v) {}
	T getV() { return _v; }
	void add(T a) { _v += a; }
};

int main()
{
	A<int> a(1);
	A<B> b;
	
	a.add(10);
	cout << a.getV() << endl;

	std::cin.ignore(); // extra line
	return 0;
}