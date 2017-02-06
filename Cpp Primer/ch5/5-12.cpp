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
using std::end;


int main(){

	int vowelCnt = 0;
	int otherCnt = 0;
	int blnkSpaceTabsAndNewLines = 0;
	int twoCharSeqCnt = 0;
	char ch;

	while(cin >> ch){
		// if ch is a vowel, increment the appropriate counter switch (ch) {
			if (ch == 'a' || 'A')
				++vowelCnt;
			else if (ch == 'e' || ch == 'E')
				++vowelCnt;
			else if (ch == 'i' || ch == 'I') 
				++vowelCnt;
			else if (ch == 'o' || ch == 'O') 
				++vowelCnt;
			else if (ch == 'u' | ch == 'U')
				++vowelCnt; 
			else if (ch == ' ' || ch == '\t' || ch ==  '\n')
				++blnkSpaceTabsAndNewLines;
			else if (ch == 'ff' || ch == 'f1' || ch == 'fi')
				++twoCharSeqCnt;
			else
				++otherCnt;
	}

	cout << "Number of vowels: " << vowelCnt << endl;

	return 0;
}