#include <iostream>

using namespace std;

int main() {
  int n1, n2;
  string op;

  cout << "Enter two numbers (Ex: 8 4): ";
  cin >> n1 >> n2;

  if (n1 <= 0 || n2 <= 0) {
    cout << "Error, number must more than 0";
  } 
  else {
    cout << "Enter an operator (+,-,*,/): ";
    cin >> op;

    if (op == "+") {
      cout << n1 + n2; 
    }
    else if (op == "-") {
      cout << n1 - n2; 
    }
    else if (op == "*") {
      cout << n1 * n2; 
    }
    else if (op == "/") {
      cout << n1 / n2; 
    }
    else {
      cout << "Operator undefined";
    }
  }
}
