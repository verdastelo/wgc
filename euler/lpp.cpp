// lpp.cpp: Четан Ананд
// Описание: A palindromic number reads the same both ways.
// The largest palindrome made from the product of
// two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product
//  of two 3-digit numbers.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  // Finds all multiples of two digit numbers and stores them.
  vector <int> multiples (0);
  for (int i = 10; i < 100; i++) {
    for (int j = 10; j < 100; j++) {
      multiples.push_back (i*j);
    }
  }

  // Convert the multiples from int into string.
  vector <string> stringMultiples (0);
  for (int i = 0; i < multiples.size(); i++) {
    stringMultiples.push_back (to_string(multiples[i])); // Converts integers into string and stores them in vector stringMultiples.
  }

  // Finds palidromic numbers.
  for (int i = 0; i < stringMultiples.size(); i++) {
    int multipleLength = 0;
    int half = 0;
    string test = " ";
    multipleLength = stringMultiples[i].size();
    if ((multipleLength % 2) == 0) { // Palindromic numbers can only have an even number of digits.
      half = stringMultiples[i].size() / 2;
      test = stringMultiples[i];
      for (int i = 0; i < half; i++) {
        if (test[i] == test[test.size()-(i+1)]) cout << stringMultiples[i] << endl;
      }
    }
  }
  return 0;
}
