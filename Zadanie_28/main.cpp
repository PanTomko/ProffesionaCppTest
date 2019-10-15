#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class B {
	int val;
public:
	B(int v) : val(v) {}
	int getV() const { return val; }
	bool operator <(const B & v) const { return val > v.val; }
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
	B t1[] = { 3, 2, 4, 1, 5 };
	B t2[] = { 5, 6, 8, 2, 1 };

	vector<B> v1(10, 0);

	sort(t1, t1 + 5);
	sort(t2, t2 + 5);

	set_intersection(t1, t1 + 5, t2, t2 + 6, v1.begin());
	for_each(v1.begin(), v1.end(), Out<B>(cout));

	std::cin.ignore(); // extra line
	return 0;
}