#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

class B {
	int val;
public:
	B(int v) : val(v) {}
	int getV() const { return val; }

	bool operator < (const B & v) const {
		return val < v.val;
	}
};

ostream & operator<<(ostream & out, const B & v) {
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

int main()
{
	set<int> s1 = { 8, 10, 5, 1, 4, 6, 2, 7, 9, 3 };

	sort(s1.begin(), s1.end());

	for_each(s1.begin(), s1.end(), Out<int>(cout));
	cout << endl;

	std::cin.ignore(); // extra line
	return 0;
}