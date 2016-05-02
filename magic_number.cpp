// magic_number.cpp: Четан Ананд
// Description: This is a magic number problem.

#include <iostream>
#include <sstream>
using namespace std;

int reverseNumbers (int number) {
  if ((number >= 1000) || (number < 100)) {
    cout << "Not in range. Exiting..." << endl;
    return -1;
  }

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

  int reversedNumber = 0;
  if (subtractHundredCounter > number) {
   reversedNumber = (number * 100) + (subtractTensCounter * 10) + (subtractHundredCounter);
   return reversedNumber;
  }

  else
    cout << "The last digit of your number is greater than the first digit.\n";
    cout << "Fatal error. Exiting...\n";
    return -2;
}

int reverseNumbersWithoutGuard (int number) {
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

   int reversedNumber = 0;
   reversedNumber = (number * 100) + (subtractTensCounter * 10) + (subtractHundredCounter);
   return reversedNumber;
}

int main() {
  cout << "Enter your number that is:\n";
  cout << "1. Between 100 and 999.\n";
  cout << "2. Whose first digit is greater than the third digit.\n";
  cout << "Number: ";
  int number;
  cin >> number;
  cout << "You entered: " << number << endl;

  int reversedNumber;
  reversedNumber = reverseNumbers (number);
  cout << "Its reverse is: " << reversedNumber << endl;

  int subRevFromNum = 0; // Subtract reversedNumber from number
  subRevFromNum = number - reversedNumber;
  cout << "The reversed number subtracted from the entered number is: " << subRevFromNum << endl;

  int revOfSubRevFromNum = 0; // Reversed of subRevFromNum
  revOfSubRevFromNum = reverseNumbersWithoutGuard (subRevFromNum);
  cout << "The reverse of the previous number is: " << revOfSubRevFromNum << endl;

  int addSubRevAndItsRev = 0;
  addSubRevAndItsRev = subRevFromNum + revOfSubRevFromNum;
  cout << "The sum of the previous two numbers is: " << addSubRevAndItsRev << endl;
  return 0;
}
