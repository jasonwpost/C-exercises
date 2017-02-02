#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
	string word1, word2;
	cout << "Enter two strings seperated by a white space: ";
	cin >> word1 >> word2;

	if (word1 == word2)
		cout << "Strings are equal." << endl;
	else {
		cout << "strings are not equal." << endl;
		auto len1 = word1.size();
		auto len2 = word2.size();

		if (len1 == len2){
			cout << "strings are equal length." << endl;
		} else if (len1 > len2){
			cout << word1 << " has a longer length." << endl;
		} else {
			cout << word2 << " has a longer length." << endl;
		}
	}


	return 0;
}