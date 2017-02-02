#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){

	vector<int> numbers;
	cout << "Enter numbers: ";

	while (cin){
		numbers.push_back(cin);
	}

	return 0;
}