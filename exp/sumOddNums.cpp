// find the sum of all odd numbers between 1 and 2001

#include <iostream>

using namespace std;

int main (void) {
  int a = 1;		// first term
  int d = 2; 		// common difference
  int l = 2001;		// last term
  int n = 0;		// an undefined number for now. represents the total elements in the series

//  d = (b - a) / (n + 1);
//  d (n + 1) = (b - a);
// dn + d = (b - a);
// dn = (b - a) - d;
// n = ((b - a) - d) / d;  

  n = ((l -a) - d) / d;

  int S = 0;		// the sum of all odd numbers between 1 and 2001

  S = (n/2) * (a + l);
  cout << "sum of all odd numbers between 1 and 2001 is: " << S << endl;
  return 0;
}
