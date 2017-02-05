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
	
	int array[]  = { 0, 1, 2, 3, 4, 5};

	vector<int> vect(begin(array), end(array));

	return 0;
}