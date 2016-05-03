// magic_card.cpp: Четан Ананд
// Описание: Implements the algorithm described in Google C++ Course. Getting Started. Exercises and Projects № 7.

#include <iostream>
using namespace std;

void findDigits (int number) {
  int subtractHundredCounter = 0;
  while (number > 100) {
    number = (number - 100);
    subtractHundredCounter++;
  }

  int subtractTensCounter = 0;
  while (number > 10) {
    number = (number - 10);
    subtractTensCounter++;
  }

  cout << "The digits are: " << endl;
  cout << "100s digit: " << subtractHundredCounter << endl;
  cout << "10s digit: " << subtractTensCounter << endl;
  cout << "Unit digit: " << number << endl;
}

int main() {
  cout << "Enter a three digit number: ";
  int num1;
  cin >> num1;
  findDigits (num1);
  return 0;
}
