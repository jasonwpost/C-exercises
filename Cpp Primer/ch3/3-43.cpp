#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;


int main(){
	constexpr size_t rowCnt = 3, colCnt = 4;

	int ia[rowCnt][colCnt]; // 12 uninitialized elements

	// case 1 = common
	for (size_t i = 0; i != rowCnt; ++i)
		for (size_t j = 0; j != colCnt; ++j){
			ia[i][j] = i * colCnt + j;
	}


	// case 2 - range for
	for (auto &row : ia)
		for (auto &col : row)
			cout << col << ' ';
	cout << endl;

	// case 3 - pointers
	for (auto p = begin(ia); p != end(ia); ++p)
		for (auto q = begin(*p); q != end(*p); ++q)
			cout << *q << ' ';
	cout << endl;

	return 0;

}