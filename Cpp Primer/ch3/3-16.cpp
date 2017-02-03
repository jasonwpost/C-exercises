#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;
using std::vector;


int main(){

	// (a) vector<int> v1;

	vector<int> v1;
	cout << "v1 size: " << v1.size() << " contents: ";
	for (auto n : v1)
		cout << n;
	cout << endl;

	// (b) vector<int> v2(10);
	vector<int> v2(10);
	cout << "v2 size: " << v2.size() << " contents: ";
	for (auto n : v2)
		cout << n;
	cout << endl;


	// (c) vector<int> v3(10, 42);
	vector<int> v3(10, 42);
	cout << "v3 size: " << v3.size() << " contents: ";
	for (auto n : v3)
		cout << n;
	cout << endl;


	// (d) vector<int> v4{10};
	vector<int> v4{ 10 };
	cout << "v4 size: " << v4.size() << " contents: ";
	for (auto n : v4)
		cout << n;
	cout << endl;


	// (e) vector<int> v5{10, 42};
	vector<int> v5{ 10, 42 };
	cout << "v5 size: " << v5.size() << " contents: ";
	for (auto n : v5)
		cout << n;
	cout << endl;


	// (f) vector<string> v6{10};
	vector<string> v6{ 10 };
	cout << "v6 size: " << v6.size() << " contents: ";
	for (auto n : v6)
		cout << n;
	cout << endl;


	// (g) vector<string> v7{10, "hi"}
	vector<string> v7{ 10, "hi" };
	cout << "v7 size: " << v7.size() << " contents: ";
	for (auto n : v7)
		cout << n;
	cout << endl;


	return 0;
}
