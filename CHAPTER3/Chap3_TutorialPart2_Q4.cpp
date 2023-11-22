#include <iostream>

using namespace std;

int main() {
  string menu;
  int order;
  float total_price = 0, money_received, balance;

  cout << "Enter type of menu: ";
  cin >> menu;
  cout << "Enter number of order: ";
  cin >> order;

  if (menu == "Kids meal") {
    total_price = ((0.05*10.50) + 10.50) * order;
  }
  else if (menu == "Snack") {
    total_price = ((0.05*15.50) + 15.50) * order;
  }
  else if (menu == "Combo") {
    total_price = ((0.05*18) + 18) * order;
  }

  cout << "Money received from customer: ";
  cin >> money_received;
  balance = money_received - total_price;
  cout << "Menu type                       : " << menu << endl;
  cout << "Number of order                 : " << order << endl;
  cout << "Cash received from customer     : " << money_received << endl;
  cout << "Total price                     : " << total_price << endl;
  cout << "Balance returned to the customer: " << balance;
}
