#include <iostream>


using std::cin;
using std::cout;
using std::endl;

struct Sales_data { 
	std::string bookNo;
	std::string bookName;
	unsigned units_sold = 0;
	double price = 0.0;
	double revenue = 0.0;
};

int main(){

	Sales_data book1, book2;
	double price1, price2;
	cin >> book1.bookNo >> book1.units_sold >> price1;
	cin >> book2.bookNo >> book2.units_sold >> price2;
	book1.revenue = book1.units_sold * price1;
	book2.revenue = book2.units_sold * price2;

	if (book1.bookNo == book2.bookNo){
		unsigned totalCount = book1.units_sold + book2.units_sold;
		double totalRevenue = book1.revenue + book2.revenue;
		cout << book1.bookNo << " " << totalCount << " " << totalRevenue << " ";
		if (totalCount != 0){
			cout << totalRevenue / totalCount << endl;
		} else {
			cout << "no sale" << endl;
		}
		return 0;
	} else {
		cout << "Error: data must refer to the same ISBN" << endl;
	}
	
}

