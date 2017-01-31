// C++11 extensions for types


#include <iostream>


int main(){

	// i  is an int. r is an alias for i, which has type int
	int i = 0, &r = i;
	// a is an int
	auto a = r;
	// ci is a const int, cr is an alias for ci
	const int ci = i, &cr = ci;
	// b is an int as the top level const is dropped when using auto
	auto b = ci;
	// c is an int
	auto c = cr;
	// d is an int*
	auto d = &i;
	// e is a const int*
	auto e = &ci;
	// f is a const int (ci has deduced type of int)
	const auto f = ci;
	// g is const int& bound to ci
	auto &g = ci;
	// this is an error - h is a plain reference while 42 is a literal
	auto &h = 42;
	// but this IS ok - can bind a const reference to a literal
	const auto &j = 42;
	// k is an int, l is a int&
	auto k = ci, &l = i;
	// m is a const int& and p is a pointer to const int
	auto &m = ci, *p = &ci;
	// wrong - n is a reference while i is an int
	auto &n = i;

	return 0;
}