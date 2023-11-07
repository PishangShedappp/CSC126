#include <iostream>

using namespace std;

int main() {
  int quantity;
  double price, total;

  cout << "Quantity: ";
  cin >> quantity;

  if (quantity > 10) {
    price = 1.50;
  }
  else {
    price = 2.00;
  }

  total = price * quantity;
  cout << "Total: RM" << total;
}
