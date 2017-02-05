#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::vector;
using std::string;

constexpr char sentence1[] = "Hit the north";
constexpr char sentence2[] = "My Cat says eeeee-ack";


int main(){
	
	const size_t sentence3Size = strlen(sentence1) + + strlen(" ") + strlen(sentence2);
	char sentence3[sentence3Size];

	strcpy(sentence3, sentence1);
	strcat(sentence3, " ");
	strcat(sentence3, sentence2);

	cout << sentence3 << endl;

	return 0;
}