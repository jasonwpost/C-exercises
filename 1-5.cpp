#include <iostream>

int main(){
	int v1, v2;
	std::cout << "Enter two integers: " << std::endl;
	std::cin >> v1 >> v2;
	std::cout << v1;
	std::cout << " * ";
	std::cout << v2;
	std::cout << " = ";
	std::cout << v1 * v2;
	std::cout << std::endl;
	return 0;
}