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

	const int size = vect.size();

	int arr[size];

	for (int i = 0; i != size; i++)
		arr[i] = vect[i];

	for (auto p = arr; p != arr + 6; ++p)
		cout << *p << " ";
	cout << endl;

	return 0;
}