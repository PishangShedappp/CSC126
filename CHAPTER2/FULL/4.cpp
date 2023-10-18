#include <iostream>

using namespace std;

int main()
{
  int n1, n2, n3;
  double average;

  cout << "Enter value for n1 = ";
  cin >> n1;
  cout << "Enter value for n2 = ";
  cin >> n2;
  cout << "Enter value for n3 = ";
  cin >> n3;
  average = (n1+n2+n3)/3;
  cout << "Average is: " << average;
}
