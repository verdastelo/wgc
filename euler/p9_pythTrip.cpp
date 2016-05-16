// p9_pythTrip.cpp: Четан Ананд
// Описание: There exists exactly one Pythagorean triplet
// for which a + b + c = 1000. Find the product abc.

// Brute force!

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int square (int n) {
  return n*n;
}

int main() {
  vector <int> a (0);
  vector <int> b (0);
  vector <int> c (0);

  for (int i = 1; i <= 1000; i++) {
    a.push_back (square (i));
    b.push_back (square (i));
    c.push_back (square (i));
  }

  int aa = 0;
  int bb = 0;
  int cc = 0;

  for (int i = 0; i < 1000; i++) {
    for (int j = 0; j < 1000; j++) {
      for (int k = 0; k < 1000; k++) {
        if (c[i] == (a[j] + b[k])) {
          if ((sqrt (a[j]) + sqrt (b[k]) + sqrt (c[i])) == 1000) {
            cout << sqrt (a[j]) << "." << sqrt (b[k]) << " and " << sqrt (c[i]) << endl;
            aa = sqrt (a[j]);
            bb = sqrt (b[k]);
            cc = sqrt (c[i]);
          }
        }
      }
    }
  }

  cout << "abc = " << aa * bb * cc << endl;
  return 0;
}
