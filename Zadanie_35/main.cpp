#include <list>
#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

template<class T>
struct Out {
	ostream & out;
	Out(ostream & out) :out(out) {}
	void operator()(const T & val) {
		out << setw(3) << hex << val;
	}
};

int main()
{
	fstream f("test.out", ios::trunc | ios::out);
	list<int> l = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for_each(l.begin(), l.end(), Out<int>(f));
	f.close(); f.open("test.out");
	for (; f.good();) {
		int i; f >> i;
		cout << i << " ";
	}
	f.close();

	std::cin.ignore(); // extra line
	return 0;
}