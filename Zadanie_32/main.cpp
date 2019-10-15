#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

class B {
	int val;
public:
	B(int v = 0) : val(v) {}
	int getV() const { return val; }
	operator int() const { return val; }
};

template<class T>
struct Out {
	ostream & out;
	Out(ostream & out) :out(out) {}
	void operator()(const T & val) {
		out << val << " ";
	}
};

struct Add {
	B operator ()(B & a, B & b) {
		return a + b;
	}
};

int main()
{
	vector<B> v1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<B> v2(10);

	transform(v1.begin(), v1.end(), v2.begin(), bind2nd(Add(), 1));

	for_each(v2.rbegin(), v2.rend(), Out<int>(cout));

	std::cin.ignore(); // extra line
	return 0;
}