#include <iostream>
using namespace std;
int main() {
  double e_weight;
  int planet;
  cout << "Whats your earth weight :\n";
  cin >> e_weight;
  cout << "Which planet do you want to fight at\n";
  cout << "1-Mercury 2-Venus 3-Mars 4-Jupiter 5-Saturn  6-Uranus 7-Neptune :\n";
  cin >> planet;
  switch (planet) {
    case 1 :
      cout << e_weight * 0.38;
      break;
    case 2 :
      cout << e_weight * 0.91;
      break;
    case 3 :
      cout << e_weight * 38;
      break;
    case 4 :
      cout << e_weight * 2.34;
      break;
    case 5 :
      cout << e_weight * 1.06;
      break;
    case 6 :
      cout << e_weight * 0.92;
      break;
    case 7 :
      cout << e_weight * 1.19;
      break;
  }
  return 0;
}