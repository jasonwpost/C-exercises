#include <iostream>

int main(){

	constexpr size_t arraySize = 10;
	int numbers[arraySize];

	for(int i = 0; i < arraySize; i++)
		numbers[i] = i;

	for (auto i : numbers)
		std::cout << i << " ";


	return 0;
}