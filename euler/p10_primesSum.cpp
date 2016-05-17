// p10_primesSum.cpp: Четан Ананд
// Описание: Find the sum of all the primes below two million.

#include <iostream>
#include <vector>
using namespace std;

// This function checks if a given integer "n" is prime.
int isPrime (int n) {
  int num = 0;
//  if ((n%2) == 0) return 1;

  for (int i = 3; i < (n/2); i+=2) {
    if ((n%i)==0) num++;
    if (num == 1) break;
  }
  return num; // If num is zero, n is prime.
}

int main() {
  // Prime numbers are stored here.
  vector <int> primes (0);
  for (int i = 3; i < 2000000; i+=2) {
    if (!(isPrime(i))) primes.push_back (i);
  }

  unsigned long int sum = 2;
  for (int i = 0; i < primes.size(); i++) {
    sum += primes[i];
  }

  cout << (primes.size() + 1) << " prime numbers were found." << endl;
  cout << "Their sum is " << sum << endl;
  cout << endl;
  return 0;
}

