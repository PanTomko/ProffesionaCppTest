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
		out << val << " ";
	}
};

int main()
{

	list<string> l;
	while (cin.good()) {
		string s;
		cin >> s;
		if (s == "quit") break;
		l.push_back(s);
	}

	for_each(l.begin(), l.end(), Out<string>(cout));

	system("pause");
	std::cin.ignore(); // extra line
	return 0;
}