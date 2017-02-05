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
	
	cout << "short: " << sizeof(short) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "size_t: " << sizeof(size_t) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;

	// code will output 10 2
	int x[10]; int *p = x;
	cout << sizeof(x)/sizeof(*x) << endl; 
	cout << sizeof(p)/sizeof(*p) << endl;
	return 0;
}