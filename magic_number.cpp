// magic_number.cpp: Четан Ананд
// Description: Implement the algorithm described in the fifth problem.

#include <iostream>
#include <sstream>
using namespace std;

int main() {
  cout << "Enter your number: ";
  int number;
  string numberString;
  getline (cin, numberString);
  for (int i = 2; i >= 0; i--) {
    cout << numberString[i];
  }
  cout << endl;
  return 0;
}
