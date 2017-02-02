#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){

	string sentence = "this. is. a string. without! puncuation??";
	cout << sentence << endl;

	for (auto &c : sentence){
		if (!ispunct(c))
			cout << c;
	}
	cout << endl;

	return 0;
}