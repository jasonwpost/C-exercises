#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
	
	string word1 = "Well hello there!";
	string word2 = "Well hello over there!";

	if(!word2.compare(word1))
		cout << "Strings are equal" << endl;
	else
		cout << "Strings are not equal" << endl;

	const char* word3 = "Well goodbye then!";
	const char* word4 = "Well goodbye then!";

	auto compare = !strcmp(word3, word4);
	if(compare)
		cout << "C strings are equal" << endl;
	else
		cout << "C strings are not equal" << endl;

	return 0;
}