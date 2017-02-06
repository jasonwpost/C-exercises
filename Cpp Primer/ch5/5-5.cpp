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


	if (grade > 90) // easier to understand as the logic is broken up
		cout << "high pass";
	else if (grade > 60)
		cout << "low pass";
	else
		cout << "fail";
	cout << endl;

	return 0;
}