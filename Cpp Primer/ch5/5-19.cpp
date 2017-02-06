#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;


int main(){

	string word1;
	string word2;

	do {

		cout << "please enter two words: ";
		cin >> word1 >> word2;
		if (word1.size() > word2.size())
			cout << "Word 1 is longer" << endl;
		else
			cout << "Word 2 is longer" << endl;


	} while (true);

	return 0;
}