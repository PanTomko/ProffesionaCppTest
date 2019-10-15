#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

template<class T>
struct Out {
	ostream & out;
	Out(ostream & out) :out(out) {}
	void operator()(const T & val) {
		out << val << " ";
	}
};

int Add(int & a, int & b) {
	return a + b;
}

int main()
{
	vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<int> v2(10);

	transform(v1.begin(), v1.end(), v2.begin(), bind2nd(ptr_fun(Add), 1));

	vector<int>::iterator it = find_if(v1.begin(), v1.end(), bind2nd(equal_to<int>(), 2));

	cout << *it << endl;

	std::cin.ignore(); // extra line
	return 0;
}