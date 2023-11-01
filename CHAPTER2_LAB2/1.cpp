#include <iostream>

using namespace std;

int main() {
  int first_number, second_number;

  cout << "Please enter first number:     ";
  cin >> first_number;
  cout << "Please enter second number:    ";
  cin >> second_number;
  cout << endl;

  cout << "Result for the following process as show below:" << endl;
  cout << "-----------------------------------------------" << endl;
  cout << endl;
  cout << "   1) Addition : " << first_number << " + " << second_number << " = " << first_number+second_number << endl;
  cout << "   2) Substraction : " << first_number << " - " << second_number << " = " << first_number-second_number << endl;
  cout << "   3) Multiplication : " << first_number << " * " << second_number << " = " << first_number*second_number << endl;
  cout << "   4) Division : " << first_number << " / " << second_number << " = " << first_number/second_number << endl;
}
