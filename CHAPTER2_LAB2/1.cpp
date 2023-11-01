#include <iostream>

using namespace std;

int main() {
  int first_number, second_number, add, subs, multiply, divide;

  cout << "Please enter first number:     ";
  cin >> first_number;
  cout << "Please enter second number:    ";
  cin >> second_number;
  cout << endl;

  cout << "Result for the following process as show below:" << endl;
  cout << "-----------------------------------------------" << endl;
  cout << endl;
  
  add = first_number+second_number;
  subs = first_number-second_number;
  multiply = first_number*second_number;
  divide = first_number/second_number;
  
  cout << "   1) Addition : " << first_number << " + " << second_number << " = " << add << endl;
  cout << "   2) Substraction : " << first_number << " - " << second_number << " = " << subs << endl;
  cout << "   3) Multiplication : " << first_number << " * " << second_number << " = " << multiply << endl;
  cout << "   4) Division : " << first_number << " / " << second_number << " = " << divide << endl;
}
