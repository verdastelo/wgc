// 10001stprime.cpp: Четан Ананд
// Описание: What is the 10 001st prime number?

#include <iostream>
#include <vector>
using namespace std;

int isPrime (int n) {
  int sum = 0;
  if ((n%2)==0) return 0;

  for (int i = 3; i <= n; i+=2) {
    if ((n%i)==0) sum++;
  }
  return sum;
}

int main() {

  // This vector stores primes.
  vector <int> primes (0);
  // Runs isPrime() on numbers from 2 to 1000000.
  for (int i = 2; i < 150000; i++) {
    if ((isPrime(i) == 1)) {
      primes.push_back (i);
      cout << i << ", ";
    }
  }
  cout << endl;
  cout << primes.size() << " primes were found." <<  endl;
  cout << "The 10001st prime is " << primes [10001-2];
  cout << endl;
  return 0;
}
