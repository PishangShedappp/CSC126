#include <iostream>

using namespace std;

int main() {
  string movie_title;
  char payment_code;
  int movie_code, number_of_ticket;
  float new_price;

  cout << "Enter movie code: ";
  cin >> movie_code;
  cout << "Enter number of ticket: ";
  cin >> number_of_ticket;

  if (movie_code == 1) {
      new_price = number_of_ticket * 25;
    movie_title= "Spiderman";
  }
  else {
      new_price = number_of_ticket * 20;
    movie_title= "Frozen";
  }

  cout << "Enter payment code: ";
  cin >> payment_code;
  if (payment_code == 'C') {
      new_price = new_price*1.10;
  }

  cout << "Movie : " << movie_title << endl;
  cout << "Price : RM" << new_price;
}
