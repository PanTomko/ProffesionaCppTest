#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

class B {
	int val;
public:
	B(int v) : val(v) {}
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


int main()
{
	vector<B> v1 = { 3, 2, 4, 1, 5, 6, 10, 8, 7, 9 };

	for_each(v1.begin(), v1.end(), bind1st(plus<B>(), 1));
	for_each(v1.rbegin(), v1.rend(), Out<B>(cout));

	std::cin.ignore(); // extra line
	return 0;
}