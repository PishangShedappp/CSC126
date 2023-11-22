#include <iostream>

using namespace std;

int main() {
  float scale;

  cout << "Enter Ritcher Scale Value: ";
  cin >> scale;

  if (scale < 5.0) {
    cout << "Little or no damage";
  }
  else if (scale >= 5.0 && scale < 5.5){
    cout << "Some damage";
  }
  else if (scale >= 5.5 && scale < 6.5){
    cout << "Serious damage: wall may crack or fall";
  }
  else if (scale >= 6.5 && scale < 7.5){
    cout << "Disaster: houses and buildings may collapse";
  }
  else {
    cout << "Catastrophe: most buildings destroyed";
  }
}
