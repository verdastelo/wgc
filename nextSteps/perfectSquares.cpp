// perfectSquares.cpp: Четан Ананд
// Описание: Finds perfect squares smaller than a lac.

#include <iostream>
#include <vector>
using namespace std;

// Returns the sum of first n numbers.
long sum_of_n_num (int n) {
  int sum = 0;
  sum = (n*(n+1))/2;
  return sum;
}

// Returns squares.
long n_squared (int n) {
  int squared = 0;
  squared = n*n;
  return squared;
}

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  vector <int> numbers;
  vector <int> squares;
  for (int i = 0; i < n; i++) {
    numbers.push_back (sum_of_n_num (i));
  }

  for (int i = 0; i < n; i++) {
    squares.push_back (n_squared (i));
  }

// Compares each squared number in vector <squares> to the each value in
// vetor <numbers.>

  for (int i = 0; i < squares.size(); i++) {
    for (int j = 0; j < numbers.size(); j++) {
      if (squares[i] == numbers[j]) {
        cout << "Found: " << squares[i] << endl;
        cout << "It's the square of " << i << " and ";
        cout << "the sum of first " << j << " natural numbers."  << endl;
        cout << endl;
      }
    }
  }

  return 0;
}
