#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;


int main(){
	vector<int> numbers;
	for (int i; cin >> i; numbers.push_back(i));

	for(auto i = numbers.begin(); i != numbers.end()-1; ++i)
		cout << *i + *i+1 << " ";

	cout << endl;

	 return 0;
}