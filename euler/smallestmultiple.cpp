// smallestmultiple.cpp: Четан Ананд
// Описание: 2520 is the smallest number that can be divided by
// each of the numbers from 1 to 10 without any
// remainder. What is the smallest positive number
// that is evenly divisible by all of the numbers
// from 1 to 20?

#include <iostream>
#include <vector>
using namespace std;

int isMultiple (unsigned long long int num) {
  // result tracks how many times num is divisible by i's.
  int result = 0;

  // Increment result by 1 every time num is divisible by i.
  for (unsigned long long int i = 1; i <= 20; i++) {
    if ((num%i) == 0) result++;
  }

  // The result shall be 20 if num is divisible by all the 20 i's.
  if (result == 20) return num;
  else return 0; // Contrary to the tradition, return 0 here suggests a failed test.
}

vector <unsigned long long int> valNums (0);

// isMultiple() can't run on all numbers. It'll be inefficient.
// validNums() produces the nums on which isMultiple() will be run.
void validNums () {
  // Valid nums will be a multiple of 20.
  for (unsigned long long int i = 1; i < 100000; i++) {
    valNums.push_back (20*i);
  }
}

int main() {
  // valNums[i] will not be in scope until validNums() is run first.
  validNums();
/*
  for (unsigned long long int i = 0; i < 100000; i++) {
    cout << valNums[i] << endl;
  }
*/
  // The search for a multiple of all natural numbers between
  // 1 and 20 takes place in this block.
  for (unsigned long long int i = 0; i < 100000; i++) {
    if (!(isMultiple (valNums[i])));
    else {
      cout << isMultiple (valNums[i]) << endl;
    }
  }
  return 0;
}
