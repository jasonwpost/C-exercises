#include <iostream>
#include "Sales_item.h"
int main(){
	Sales_item total; //hold data for next transaction

	if (std::cin >> total) {
		Sales_item trans; // hold running sum
		while (std::cin >> trans) { 
			// if we're still processing the same book
			if(total.isbn() == trans.isbn())
				total += trans;
			// print results for previous book
			else {
				std::cout << total << std::endl;
				total = trans;
				}
		}
	}
	else {
		// warn user
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
}
