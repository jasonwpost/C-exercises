#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;


int main(){
	vector<int> numbers{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for(auto n = numbers.begin(); n != numbers.end(); ++n)
		*n = *n * 2;

	for(auto n = numbers.begin(); n != numbers.end(); ++n)
		cout << *n << " ";

	 return 0;
}