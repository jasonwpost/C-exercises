#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;
using std::vector;


int main(){

	vector<string> text;
	text.push_back("this");
	text.push_back("is");
	text.push_back("upper");
	text.push_back("case");

	for (auto& word : text){
		for(auto& ch : word)

			if (isalpha(ch)) 
				ch = toupper(ch);

		cout << word << " ";
	}

	return 0;
}
