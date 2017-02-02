#include <iostream>
#include <string>

using std::string;
using namespace std;

int main(){

	string input;

	while (cin){
		getline(cin, input);
		cout << input << endl;
	}

	return 0;
}