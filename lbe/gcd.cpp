// gcd.cpp: Четан Ананд
// Description: Finds the Greatest Common Divisor of two numbers.

#include <iostream>
using namespace std;

/*int gcd (int a, int b) {
  int temp;
  while (b != 0) {
    temp = a % b;
    a = b;
    b = temp;
  }
  return(a);
}
*/

int gcd (int a, int b) {
  int q = 0; // quotient
  int r = 0; // remainder

  do {
    r = b%a;

/*    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "q = " << q << endl;
    cout << "r = " << r << endl;
*/
    b = a;
    a = r;
/*
    cout << "new a = " << a << endl;
    cout << "new b = " << b << endl;
    cout << "new q = " << q << endl;
    cout << "new r = " << r << endl;
*/
  } while (r != 0);

  return b;
}

int main() {
  cout << gcd (1701, 3768) << endl;
  return 0;
}

/*
int main() {
  int a = 0; // a random number
  int b = 0; // a random number
  int q = 0; // quotient
  int r = 0; // remainder

  do {
    cout << "Enter two integers separated by a space (Enter -1 twice to exit.): ";
    if ((cin >> a >> b) && (a == -1) && (b == -1)) {
      cout << "Pressed -1. Exiting..." << endl;
      break;
    }

    if (!(cin >> a >> b)) {
      cout << "You've entered a non-numeric." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }

    if (cin >> a >> b) {
      q = b/a;
      r = b%a;
      cout << "q is " << q << endl;
      cout << "r is " << r << endl;
    }
  } while (r != 0);

  return 0;
}
*/