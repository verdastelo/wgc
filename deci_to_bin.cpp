#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Converting from decimal to binary involves playing with numbers. For that we'll need some space.
  // The variables we're going to declare can be our storage spaces.
  int deci = 0; // will store the numbers in their decimal representation.
  // We can start with asking the user to enter a number and storing what he enters in a variable named, deci.
  cout << "Enter a number: ";
  int i; // decimal representation
  int q; // quotient
  vector <int> bin; // binary
  while (cin >> i) {
      if ((i%2)==0) bin.push_back(0);
      if ((i%2)==1) bin.push_back(1);
  }
  return 0;
}
