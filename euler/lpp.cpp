// lpp.cpp: Четан Ананд
// Описание: A palindromic number reads the same both ways.
// The largest palindrome made from the product of
// two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product
//  of two 3-digit numbers.

// The current shape of the code is a mess. It's poorly written. But it does the job.
// I'll have to return to it to divide it into functions and  make it more readable.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  // Finds the multiples of 2-digit numbers and stores them in the
  // vector named <multiples>.
  vector <int> multiples (0);
  for (int i = 100; i < 1000; i++) {
    for (int j = 100; j < 1000; j++) {
      multiples.push_back (i*j);
    }
  }

  // Converts the multiples from int to string.
  vector <string> strMultiples (0);
  for (int i = 0; i < multiples.size(); i++) {
    // Converts integers into string and stores them in vector <strMultiples.>
    strMultiples.push_back (to_string(multiples[i]));
  }

  // To store palindromic numbers.
  vector <int> numsPalindromic (0);
  // Finds palindromic numbers.
  for (int i = 0; i < strMultiples.size(); i++) {
    // multipleLength is the number of characters in each string of
    // vector <strMultiples.>
    int multipleLength = 0;
    multipleLength = strMultiples[i].size();

    // test will hold a strMultiples[i] when the next block of code
    // is run on it.
    string test = " ";

    // Palindromic numbers can only have an even number of digits
    // or chars in this case.
    if ((multipleLength % 2) == 0) {
      // If the number of digits (chars here) is even,
      // store that data point in <strMultiples> to test.
      test = strMultiples[i];

      // Here three variables are declared for use in three for loops.
      vector <int> tests1 (0);
      vector <int> tests2 (0);
      int result = 0;

      // Vector <tests1> stores the digits (or chars) of test
      // or strMultiples[i] as they occur.
      for (int i = 0; i < multipleLength; i++) tests1.push_back (test[i]);

      // Vector <tests2> stores the digits (or chars) for test
      // or strMultiples[i] in reverse order.
      // The last digit (or char) is stored in [0].
      for (int i = (multipleLength-1); i >= 0; i--) tests2.push_back (test[i]);

      // If the number (technically a string in this function) is palindromic
      // it should read the same forwards and backwards.
      // This blocks checks palindromicity.
      for (int i = 0; i < multipleLength; i++) {
        if (tests1[i] == tests2[i]) result++;
        // The strings are converted to int and stores in <numsPalindromic>.
        if (result == multipleLength) numsPalindromic.push_back(stoi(test));
     }
  }
  }

  int num = numsPalindromic[0];
  for (int i = 0; i < numsPalindromic.size(); i++) {
    if (num > numsPalindromic[i+1]);
    else num = numsPalindromic[i+1];
  }

  cout << "The largest palindromic number is " << num << endl;
  return 0;
}
