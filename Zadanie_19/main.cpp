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
	int operator()() { return start++; }
};

int main()
{
	vector<int> v1(5);
	generate(v1.begin(), v1.end(), Sequence(1));

	set<int> s1(v1.rbegin(), v1.rend());
	deque<int> d1(s1.rbegin(), s1.rend());

	reverse(v1.begin(), v1.end());
	reverse(s1.begin(), s1.end());
	reverse(d1.begin(), d1.end());

	for_each(v1.begin(), v1.end(), Out<int>(cout));
	for_each(s1.begin(), s1.end(), Out<int>(cout));
	for_each(d1.begin(), d1.end(), Out<int>(cout));

	cout << endl;

	std::cin.ignore(); // extra line
	return 0;
}