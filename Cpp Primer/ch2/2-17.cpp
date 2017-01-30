#include <iostream>

int main(){
	int i, &ri = i;
	i = 5; ri = 10;
	std:cout << i << " " << ri << std::endl;
	// prints 10 10 as ri is a reference to i, and overrides the 5 as it happens last
}