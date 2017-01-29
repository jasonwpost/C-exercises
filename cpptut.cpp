// This is a comment
/*
Multiline
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
  cout << "Hello World" << endl; // printf for c++!

  const double PI = 3.1415926535; // constants are upper case

  char myGrade = 'A';

  bool isHappy = true;

  int myAge = 27;

  float favNumber = 3.141592;

  double otherFavNumber = 1.6180339887;

  cout << "Favourite Number: " << favNumber << endl;

  //Other types include
  // short int : at least 16 bits
  // long int : at least 32 bits
  // long long int : at least 64 bits
  // unsigned int : same as signed version
  // long double : Not less than double

  cout << "Size of int: " << sizeof(myAge) << endl;
  cout << "Size of bool: " << sizeof(isHappy) << endl;
  cout << "Size of float: " << sizeof(favNumber) << endl;
  cout << "Size of char: " << sizeof(myGrade) << endl;
  cout << "Size of double: " << sizeof(otherFavNumber) << endl;

  int largestInt = 2147483647;

  cout << "Largest int: " << largestInt << endl;

  // + - * / % -- ++ possible increments, operators, etc


  //
  //  IF-ELSE SYNTAX
  //

  int age = 70;
  int ageAtLastExam = 16;
  bool isNotIntoxicated = true;

  if((age >= 1) && (age < 16)){
    cout << "You can't drive" << endl;
  } else if (! isNotIntoxicated) {
    cout << "You can't drive" << endl;
  } else if(age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))){
    cout << "You can't drive" << endl;
  } else {
    cout << "You can drive" << endl;
  }

  //
  // SWITCH STATEMENT SYNTAX
  //

  int greetingOption = 2;

  switch(greetingOption){
    case 1:
      cout << "bonjour" << endl;
      break;
    case 2:
      cout << "Hola" << endl;
      break;
    case 3:
      cout << "Hallo" << endl;
      break;
    default:
      cout << "Hello" << endl;
  }

  //
  // TERNARY OPERATOR
  //

  int largestNum = (5>2) ? 5 : 2;
  cout << "Larger number of 5 and 2: " << largestNum << endl;

  //
  // ARRAY SYNTAX
  //

  int myFavNums[5];

  int badNums[5] = {4, 13, 14, 24, 34};

  cout << "Bad Number 1: " << badNums[0] << endl;

  char myName[5][5] = {{'j', 'a', 's', 'o', 'n'}, {'p', 'o', 's', 't'}};

  cout << "2nd letter in 2nd array: " << myName[1][1] << endl;

  //
  // FOR LOOP
  //

  for(int i = 1; i <= 10; i++){
    cout << i << endl;
  }

  for (int j = 0; j < 5; j++){
    for(int k = 0; k < 5; k++){
      cout << myName[j][k];
    }
    cout << endl;
  }

  //
  // WHILE LOOP
  //

  int randNum = (rand() % 100);

  while(randNum != 100){
    cout << randNum << ", ";
    randNum = (rand() % 100) + 1;
  }

  cout << endl;

  //
  // DO WHILE LOOP AND USER INPUT
  //

  string numberGuessed;
  int intNumberGuessed = 0;

  do {
    cout << "Guess a number between one and 10: ";

    getline(cin, numberGuessed);

    intNumberGuessed = stoi(numberGuessed);

    cout << intNumberGuessed << endl;

  } while (intNumberGuessed != 4);

  cout << "You win" << endl;

  return 0;

}
