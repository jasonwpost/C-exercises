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

	vector<int> v1 { 0, 1, 1, 2 };
	vector<int> v2 { 0, 1, 1, 2, 3, 4, 5 };

	int v1Size = v1.size();
	int v2Size = v2.size();
	bool isPrefix = true;

	if (v1Size > v2Size || v1Size == v2Size){

		for(int i=0; i<v2Size;i++)
			if (v2[i] != v1[i]){ 
				isPrefix = false;
				break;
			}

	} else {

		for(int i=0; i<v1Size;i++)
			if (v1[i] != v2[i]){ 
				isPrefix = false;
				break;
			}

	}

	cout << ((isPrefix) ? "A prefix exists" : "A prefix does not exists") << endl;

	return 0;
}