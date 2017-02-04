#include <iostream>

int main(){

	int arr[5] = {5, 3, 6, 7, 8};

	for (auto i : arr)
		std::cout << i << " ";
	std::cout << std::endl;

	std::cout << "Now applying special pointer tech to make the array 0..." << std::endl;

	for (auto ptr = arr; ptr < arr + 5; ++ptr)
		*ptr = 0;

	for (auto i : arr)
		std::cout << i << " ";
	std::cout << std::endl;

	return 0;
}