#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
	
	string word = "This is a string";
	cout << word << endl;

	// c is now no longer a reference so it won't change the string
	for (char c : word){
		c = 'X';
	}
	cout << word << endl;

	return 0;
}