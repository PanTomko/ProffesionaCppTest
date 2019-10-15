#include <iostream>
#include <string>

using namespace std;

class B {};

template<class T>
class A {
	T _v;
public:
	A() {}
	A(T v) : _v(v) {}
	T getV() { return _v; }

	void add(T & a);
	void add(string & a);
};

template<class T>
void A<T>::add(T & a) {

}

void A<string>::add(string & a) {
	_v.insert(0, a);
}

int main()
{
	A<string> a("Hello");
	string s(" world!");
	a.add(s);

	cout << a.getV() << endl;

	std::cin.ignore(); // extra line
	return 0;
}