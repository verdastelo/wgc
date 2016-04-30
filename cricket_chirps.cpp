// cricket_chirps.cpp: Четан Ананд
// Description: This program will tell a user the temperature if the user
// can count the rate of cricket chirps around him.

#include <iostream>
using namespace std;

double chirps_to_temp (int chirps) {
  double temp;
  temp = (chirps + 40) / 4;
  return temp;
}

int main() {
  cout << "Can you hear crickets chirping around you?\n";
  cout << "Press 'y' for \"yes\" and 'n' for \"no\".";
  cout << "\n\n";
  char c;
  cin >> c;
  if (c == 'n') {
    cout << "This program is not for you. Exiting...\n";
    return 0;
    }
  else {
    cout << "Count how many times the crickets chirp in a minute and\n";
    cout << "enter that number here: ";
    int chirps; // chirps per minute
    while (cin >> chirps) {
      cout << "The temperature is " << chirps_to_temp (chirps);
      cout << " degrees Celsius.\n";
      cout << "\n\n";
      cout << "Count how many times the crickets chirp in a minute and\n";
      cout << "enter that number here: ";

    }
  }
  cout << "\n\n\n";
  cout << "Thank you for using this program.\n";
  return 0;
}
