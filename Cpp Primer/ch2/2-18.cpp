#include <iostream>

int main(){
	int a = 10;
	int b = 20;
	int *c = &a;
	std::cout << c << std::endl;
	c = &b;
	std::cout << c << std::endl;
	return 0;
}