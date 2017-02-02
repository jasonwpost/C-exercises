#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
	
	string word = "This is a string";
	cout << word << endl;

	// for each technique - the most concise
	for (auto &c : word){
		c = 'X';
	}
	cout << word << endl;

	word = "This is a string";
	cout << word << endl;

	// for technique - more verbose but with more control
	auto length = word.size();
	for (int i = 0; i < length; i++){
		word[i] = 'X';
	}
	cout << word << endl;

	word = "This is a string";
	cout << word << endl;

	// while technique - even more verbose but same level of control as for
	int j = 0;
	while (j < length){
		word[j] = 'X';
		j++;
	}
	cout << word << endl;


	return 0;
}