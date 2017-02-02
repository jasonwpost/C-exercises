#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
	
	string longString;
	string input;
	while(cin){
		getline(cin, input);
		longString = longString + input;
		cout << longString << endl;
	}

	return 0;
}