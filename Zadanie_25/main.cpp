#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

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
	int t1[] = { 3, 2, 4, 1, 5 };
	int t2[] = { 5, 6, 8, 2, 1 };

	vector<int> v1(10);

	sort(t1, t1 + 5);
	sort(t2, t2 + 5);

	set_symmetric_difference(t1, t1 + 5, t2, t2 + 5, v1.begin());
	for_each(v1.begin(), v1.end(), Out<int>(cout));
	cout << endl;

	std::cin.ignore(); // extra line
	return 0;
}