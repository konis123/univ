/*
#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

void dump(list<string> &l) {
	list<string>::iterator iter = l.begin();

	while (iter != l.end()) {
		cout << *iter << endl;
		iter++;
	}

}

void main() {

	list<string> names;
	names.insert(names.begin(), "konkuk");
	names.insert(names.end(), "university");
	names.insert(names.end(), "sclab");
	names.insert(names.end(), "csy");
	dump(names);
	cout << "===" << endl;
	names.reverse();
	dump(names);

}
*/