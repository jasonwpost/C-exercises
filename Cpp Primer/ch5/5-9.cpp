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
			if ('a')
				++vowelCnt;
			else if ('e')
				++vowelCnt;
			else if ('i') 
				++vowelCnt;
			else if ('o') 
				++vowelCnt;
			else if ('u')
				++vowelCnt; 
			else
				++otherCnt;
	}

	cout << "Number of vowels: " << vowelCnt << endl;

	return 0;
}