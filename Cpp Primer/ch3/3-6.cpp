#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
	
	string word = "This is a string";
	cout << word << endl;

	for (auto &c : word){
		c = 'X';
	}
	cout << word << endl;

	return 0;
}