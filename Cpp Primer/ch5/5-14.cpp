#include <iostream>
#include <string>

using std::cout; 
using std::cin; 
using std::endl; 
using std::string; 
using std::pair;

int main()
{ 
    string duplicated;
    int numDuplicated;

    int count = 1;
    for (string str, prestr; cin >> str; prestr = str)
    {
        if (str == prestr) 
            ++count;
        else 
            count = 1; 
        if (count > numDuplicated){
            duplicated = prestr; 
            numDuplicated = count;
        }
    }
    
    if (duplicated.empty())
        cout << "There is no repeated string." << endl;
    else
        cout << "the word " << duplicated << " was repeated " << numDuplicated << " times. " << endl;
    
    return 0;
}