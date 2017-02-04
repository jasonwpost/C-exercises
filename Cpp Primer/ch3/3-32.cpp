#include <iostream>

int main(){

	constexpr size_t arraySize = 10;
	int numbers[arraySize];
	int numbers2[arraySize];

	for(int i = 0; i < arraySize; i++)
		numbers[i] = i;

	for(int i = 0; i < arraySize; i++)
		numbers2[i] = numbers[i];

	for (auto i : numbers2)
		std::cout << i << " ";


	return 0;
}