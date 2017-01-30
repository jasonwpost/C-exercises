#include <iostream>

int main(){
	int i, j;
	std::cout << "Enter two integers: ";
	std::cin >> i >> j;
	if (i < j){
		while (i <= j){
			std::cout << i << std::endl;
			i++;
		}
	} else {
		while (j <= i){
			std::cout << i << std::endl;
			i--;
		}
	}
	return 0;
}