#include <iostream>

int main(){
	int i = 2;
	int j = 3;
	std::cout << i;
	// this program highlights incorrectly nested comments
	/*
	* /* this is incorrect */ i = 6;  

	 std:: cout << " * " << j << " = " << i * j << std::endl;
	return 0;
}