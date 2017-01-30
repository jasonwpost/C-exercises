#include <iostream>

int main(){
	std::cout << "/*";
	std::cout << "*/";
	//std::cout << /* "*/" */; is illegal
	std::cout << /* "*/" */"; // fixed
	std::cout << /* "*/" /* "/*" */; 
	return 0;
}