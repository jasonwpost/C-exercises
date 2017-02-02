#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){

	vector<string> strings;
	cout << "Enter strings: ";

	for(string buffer; cin >> buffer; strings.push_back(buffer));

	return 0;
}