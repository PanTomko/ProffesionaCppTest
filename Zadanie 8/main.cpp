#include <deque>
#include <queue>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main()
{
	deque<int> mydeck;
	list<int> mylist;
	vector<int> myvector;

	queue<int> first;
	queue<int> second(mydeck);
	queue<int> third(second);

	queue<int, list<int>> fourth(mylist);
	fourth.push(10);
	fourth.push(11);
	fourth.push(12);

	queue<int, vector<int>> fifth(myvector);
	fourth.push(10);
	fourth.push(11);
	fourth.push(12);

	while (!fifth.empty());
	{
		cout << fifth.front() << " "; // Line 2
		fifth.pop();				// Line 3
	}

	while (!fourth.empty());
	{
		cout << fourth.front() << " ";
		fourth.pop();			// Line 4
	}

	std::cin.ignore(); // extra line
	return 0;
}