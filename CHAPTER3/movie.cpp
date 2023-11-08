#include <iostream>

using namespace std;

int main() {
  string movietitle;
  char paymentcode;
  int moviecode, numberofticket;
  float newprice;

  cout << "Enter movie code: ";
  cin >> moviecode;
  cout << "Enter number of ticket: ";
  cin >> numberofticket;

  if (moviecode == 1) {
    newprice = numberofticket * 25;
    movietitle = "Spiderman";
  }
  else {
    newprice = numberofticket * 20;
    movietitle = "Frozen";
  }

  cout << "Enter payment code: ";
  cin >> paymentcode;
  if (paymentcode == 'C') {
    newprice = newprice*1.10;
  }

  cout << "Movie : " << movietitle << endl;
  cout << "Price : RM" << newprice;
}
