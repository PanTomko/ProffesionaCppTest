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

int main()
{
	deque<int> d1 = { 8, 10, 5, 1, 4, 6, 2, 7, 9, 3 };

	sort(d1.begin(), d1.end());
	deque<int>::iterator it = upper_bound(d1.begin(), d1.end(), 4);

	for_each(it, d1.end(), Out<int>(cout));
	cout << endl;

	std::cin.ignore(); // extra line
	return 0;
}