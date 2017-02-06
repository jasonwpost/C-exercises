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
	

	int grade = 70;



	
	cout << ((grade > 90) ? "high pass" : (grade < 60) ? "fail" : "low pass") << endl;

	
	return 0;
}