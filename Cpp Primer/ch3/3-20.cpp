#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;


int main(){
	vector<int> numbers;
	for (int i; cin >> i; numbers.push_back(i));

	for(int i = 0; i < numbers.size()-1; i++)
		cout << numbers[i] + numbers[i+1] << " ";

	cout << endl;

	 return 0;
}