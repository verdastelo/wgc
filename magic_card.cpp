// magic_card.cpp: Четан Ананд
// Описание: Implements the algorithm described in Google C++ Course. Getting Started. Exercises and Projects № 7.

#include <iostream>
using namespace std;

void algorithmImplemented (int num) {
  int hunCount = 0; // Count hundreds in a number.
  while (num > 100) {
    num = (num - 100);
    hunCount++;
  }

  int tenCount = 0;
  while (num > 10) {
    num = (num - 10);
    tenCount++;
  }

  int unitCount = 0;
  unitCount = num;

/*  cout << "The digits are: ";
  cout << hunCount << ',';
  cout << tenCount << " and ";
  cout <<  unitCount << endl; */

  int a = hunCount;
  int b = tenCount;
  int c = unitCount;

// Find three numbers

  int abc = 0;
  abc = (a * 100) + (b * 10) + (c);

  int bca = 0;
  bca = (b * 100) + (c * 10) + (a);

  int cab = 0;
  cab = (c * 100) + (a * 10) + (b);

//  cout << "The numbers are " << abc << ' ' << bca << ' ' << cab << endl;

// Division by 11
  int x = 0;
  x = abc % 11;

  int y = 0;
  y = bca % 11;

  int z = 0;
  z = cab % 11;

//  cout << "Division of these numbers by 11 leaves " << x << ' ' << y << " and " << z << " as remainders." << endl;

// Add remainders

  int rem1 = 0;
  rem1 = x + y;

  int rem2 = 0;
  rem2 = y + z;

  int rem3 = 0;
  rem3 = z + x;

//  cout << "Adding remainders produces " << rem1 << ", " << rem2 << " and " << rem3 << endl;

// Operate by 11

  int pnum1 = 0;
  if (!(rem1 % 2)) pnum1 = rem1;
  if (rem1 % 2) {
    //if ((rem1 > 0) and (rem1 <= 20)) pnum1 = rem1;
    if (rem1 >= 11) pnum1 = rem1 - 11;
    if (rem1 < 9) pnum1 = rem1 + 11;
    if (rem1 == 9) pnum1 = rem1;
  }

  int pnum2 = 0;
  if (!(rem2 % 2)) pnum2 = rem2;
  if (rem2 % 2) {
    //if ((rem2 > 0) and (rem2 <= 20)) pnum2 = rem2;
    if (rem2 >= 11) pnum2 = rem2 - 11;
    if (rem2 < 9) pnum2 = rem2 + 11;
    if (rem2 == 9) pnum2 = rem2;
  }

  int pnum3 = 0;
  if (!(rem3 % 2)) pnum3 = rem3;
  if (rem3 % 2) {
    //if ((rem3 > 0) and (rem3 <= 20)) pnum3 = rem3;
    if (rem3 >= 11) pnum3 = rem3 - 11;
    if (rem3 < 9) pnum3 = rem3 + 11;
    if (rem3 == 9) pnum3 = rem3;
  }

//  cout << "The numbers after division are " << pnum1 << ' ' << pnum2 << ' ' << pnum3 << endl;

// Find half numbers

  int aa = 0;
  aa = pnum1 / 2;

  int bb = 0;
  bb = pnum2 / 2;

  int cc = 0;
  cc = pnum3 / 2;

// Publish result:

//  cout << "The numbers are " << aa << ' ' << bb << ' ' << cc << endl;

// Test

  if ((a == aa) and (b == bb) and (c == cc))  cout << "Correct!" << endl;

}


int main() {
  int num1;
  for (int i = 100; i < 1000; i++) {
    algorithmImplemented (i);
  }
  return 0;
}
