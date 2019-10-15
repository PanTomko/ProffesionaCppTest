#include <iostream>

using namespace std;

class B {};

template<class T>
class A {
	T _v;
public:
	A(T v) : _v(v) {}
	T getV() { return _v; }
};

int main()
{
	A<int> a(1);
	cout << a.getV() << endl;
	std::cin.ignore(); // extra line
	return 0;
}