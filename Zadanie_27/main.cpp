#include <set>
#include <algorithm>
#include <iostream>
#include <deque>

using namespace std;

class B {
	int val;
public:
	B(int v) : val(v) {}
	int getV() const { return val; }
	bool operator <(const B & v) const { return val < v.val; }
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
	B t1[] = { B(1), B(2), B(3), B(4) };
	bool a = (!(B(2) < B(1)) && !(B(1) < B(2)));
	deque<B> d1 = { 8, 10, 5, 1, 4, 6, 2, 7, 9, 3 };
	set<B> s1 = { 8, 10, 5, 1, 4, 6, 2, 7, 9, 3 };

	sort(d1.begin(), d1.end());

	cout << includes(d1.begin(), d1.end(), t1, t1 + 4) << " "
		<< includes(s1.begin(), s1.end(), t1, t1 + 4) << endl;

	std::cin.ignore(); // extra line
	return 0;
}
