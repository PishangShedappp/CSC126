#include <iostream>

using namespace std;

int main() {
  char item_code;
  float price;

  cout << "Enter your item code: ";
  cin >> item_code;

  if (item_code == 'A') {
    price = (54.00 * 0.05) + 54.00;
    cout << "The price of the item is " << price << endl;
  }
  else if (item_code == 'B') {
    price = (65.00 * 0.05) + 65.00;
    cout << "The price of the item is " << price << endl;
  }
  else if (item_code == 'C') {
    price = (82.00 * 0.05) + 82.00;
    cout << "The price of the item is " << price << endl;
  }
  else if (item_code == 'D') {
    price = (103.00 * 0.07) + 103.00;
    cout << "The price of the item is " << price << endl;
  }
  else if (item_code == 'E') {
    price = (150.00 * 0.07) + 150.00;
    cout << "The price of the item is " << price << endl;
  }
  else if (item_code == 'F') {
    price = (245.00 * 0.10) + 245.00;
    cout << "The price of the item is " << price << endl;
  }
  else if (item_code == 'G') {
    price = (250.00 * 0.10) + 250.00;
    cout << "The price of the item is " << price << endl;
  }
  else {
    cout << "Error, this item code is not in the list";
  }
}
