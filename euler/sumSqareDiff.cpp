// sumSquareDiff.cpp: Четан Ананд
// Описание: Find the difference between the sum of
// the squares of the first one hundred natural
// numbers and the square of the sum.

#include <iostream>
using namespace std;

unsigned long long int sum_of_first_n_numbers (int n) {
  unsigned long long int sum;
  sum = (n*(n+1))/2;
  return sum;
}

unsigned long long int sum_of_first_n_squares (int n) {
  unsigned long long int  num;
  num = (n * (n+1) * ((2*n)+1)) / 6;
  return num;
}

unsigned long long int square_it (unsigned long long int i) {
  return (i*i);
}

unsigned long long int diff (unsigned long long int i1, unsigned long long int i2) {
  return (i1 - i2);
}

int main() {
  cout << "Square of the sum of first 100 numbers: ";
  unsigned long long int sum1 =  square_it(sum_of_first_n_numbers (100));
  cout << "sum1: " << sum1 << endl;

  cout << "Sum of the squares of first 100 numbers: ";
  unsigned sum2 = sum_of_first_n_squares (100);
  cout << "sum2: " << sum2 << endl;

  cout << "Difference between sum1 and sum2: ";
  cout << diff (sum1, sum2) << endl;

  return 0;
}
