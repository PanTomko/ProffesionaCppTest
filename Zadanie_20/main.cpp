#include <vector>
#include <set>
#include <deque>
#include <algorithm>
#include <iostream>

using namespace std;

template<class T>
struct Out {
	ostream & out;
	Out(ostream & out) :out(out) {}
	void operator()(const T & val) {
		out << val << " ";
	}
};

struct Sequence {
	int start;
	Sequence(int start) : start(start) {}
	int operator()() { return 10 * (1 + (start++ % 3)); }
};

int main()
{
	vector<int> v1(10);
	generate(v1.begin(), v1.end(), Sequence(1));

	unique(v1.begin(), v1.end());

	for_each(v1.begin(), v1.end(), Out<int>(cout));
	cout << endl;

	std::cin.ignore(); // extra line
	return 0;
}