#include <iostream>

int main(){
	int v1, v2;

	// Fragment is illegal because no cout operator exists.
	// To fix, include std::cout on lines 9 and 10
	std::cout << "The sum of " <<v1;
	<< " and " << v2;
	<< " is " << v1 + v2 << std::endl;
	return 0;
}