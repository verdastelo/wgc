// smallestmultiple.cpp: Четан Ананд
// Описание: 2520 is the smallest number that can
// be divided by each of the numbers from 1 to 10
// without any remainder. What is the smallest
// positive number that is evenly divisible by all
// of the numbers from 1 to 20?

#include <iostream>
#include <vector>
using namespace std;

vector <unsigned long int> valNums ;

// Produces multiples of 20 and stores them in vector valNums.
void validNums () {
  // Valid nums will be a multiple of 20.
  for (unsigned long int i = 1; i < 100000000; i++) {
    valNums.push_back (20*i);
  }
}

// Checks whether the argument is divisible by each natural
// number from 3 to 19;
int isMultiple (unsigned long int num) {
  // result tracks how many times num is divisible by i's.
  int result = 0;

  // Increment result by 1 every time num is divisible by i.
  for (unsigned long int i = 3; i <= 19; i++) {
    if ((num%i) == 0) result++;
  }

  // The result shall be 17 if num is divisible by all the 17 i's.
  return result;
}

int main() {
  validNums();

  for (unsigned long int i = 0; i < valNums.size(); i++) {
    if ((isMultiple (valNums[i])) == 17) cout << valNums[i] << endl;
  }
  cout << endl;
  return 0;
}
