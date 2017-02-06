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
	char ch;

	while(cin >> ch){
		// if ch is a vowel, increment the appropriate counter switch (ch) {
			if ('a' || 'A')
				++vowelCnt;
			else if ('e' || 'E')
				++vowelCnt;
			else if ('i' || 'I') 
				++vowelCnt;
			else if ('o' || 'O') 
				++vowelCnt;
			else if ('u' | 'U')
				++vowelCnt; 
			else
				++otherCnt;
	}

	cout << "Number of vowels: " << vowelCnt << endl;

	return 0;
}