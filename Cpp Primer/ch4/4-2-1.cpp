#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main(){
	

	vector<int> vect { 1, 3, 4, 5, 7, 8 };

	for (auto i : vect)
		cout << ((i % 2 == 0) ? "even" : "odd") << endl;

	return 0;
}