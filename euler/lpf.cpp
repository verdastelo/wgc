// lpf.cpp: Largest Prime Factor
// Автор: Четан Ананд
// Описание: Find the largest prime factor of the number 600851475143

#include <iostream>
#include <vector>
using namespace std;

vector <unsigned long int> factors (0);
vector <int> prime_check (0);

// Finds the prime and composite factors of a number.
void factors_finder (unsigned long int n) {
  for (int i = 3; i < (n/2); i+=2) {
    if ((n%i) == 0) factors.push_back(i);
  }
}

// Returns zero if a number is prime.
int prime_checker (unsigned long int n) {
  for (int i = 3; i < (n/2); i+=2) {
    if ((n%i) == 0) prime_check.push_back(i);
  }
  return prime_check.size();
}

int main() {
  cout << "Enter a number: ";
  unsigned long int number;
  cin >> number;
  factors_finder (number);
  for (int i = 0; i < factors.size(); i++) {
    if (!(prime_checker(factors[i]))) cout << factors[i] << endl;
  }
  return 0;
}
