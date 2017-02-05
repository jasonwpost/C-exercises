#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){
	const int arrSize = 4;
	int arr1[arrSize] = {3, 2, 4, 5};
	int arr2[arrSize] = {3, 2, 4, 5};
	bool arrIsEqual = true;

	for (int i = 0; i < arrSize; i++){
		if (arr1[i] != arr2[i]){
			arrIsEqual = false;
			break;
		}
	}

	if (arrIsEqual)
		cout << "Arrays are equal" << endl;
	else
		cout << "Arrays are not equal" << endl;

	arrIsEqual = true;

	vector<int> vector1 { 1, 3, 4, 6 };
	vector<int> vector2 { 1, 3, 4, 6 };

	for (int i = 0; i < arrSize; i++){
		if (vector1[i] != vector2[i]){
			arrIsEqual = false;
			break;
		}
	}

	if (arrIsEqual)
		cout << "Vectors are equal" << endl;
	else
		cout << "Vectors are not equal" << endl;


	return 0;
}