#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;
using std::vector;


int main(){

	vector<string> words;
    for (string word; cin >> word; words.push_back(word));
    for (auto &str : words) 
    	for (auto &c : str) c = toupper(c);

    for (int i = 0; i != words.size(); ++i){
       if (i != 0 && i % 8 == 0) 
       	cout << endl;
       cout << words[i] << " ";
    }
    cout << endl;


	return 0;
}
