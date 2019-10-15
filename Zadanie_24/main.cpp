#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

template<class T>
class B {
	T val;
public:
	B(T v) : val(v) {}
	T getV() const { return val; }
};

template<class T>
ostream & operator<<(ostream & out, const B<T> & v) {
	out << v.getV();
	return out;
}

template<class T>
struct Out {
	ostream & out;
	Out(ostream & out) :out(out) {}
	void operator()(const T & val) {
		out << val << " ";
	}
};

string tolower(const string & s) {
	string tmp(s);
	for (unsigned i = 0; i < s.size(); i++) {
		tmp[i] = tolower(tmp[i]);
	}

	return tmp;
}

bool Less(const B<string> & a, const B<string> & b) {
	return tolower(a.getV()) < tolower(b.getV());
}

int main()
{
	string t[] = { "aaa", "bbb", "Aaa",
					"Bbb", "aAa", "bBb",
					"aaA", "bbB" };

	vector<B<string>> v1;
	v1.assign(t, t + 8);

	stable_sort(v1.begin(), v1.end(), Less);

	for_each(v1.begin(), v1.end(), Out<B<string>>(cout));
	cout << endl;

	std::cin.ignore(); // extra line
	return 0;
}