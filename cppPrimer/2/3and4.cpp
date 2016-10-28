// 3and4.cpp
// Exercises 2.3 and 2.4 from C++ Primer.
// verdastelo (世界语者)
// ２０１６年１０月２８日

#include <iostream>

using namespace std;

int main() {
  unsigned u = 10, u2 = 42;
  cout << u2 - u << endl;	// result 32
  cout << u - u2 << endl;	// result a huge number

  int i = 10, i2 = 42;
  cout << i2 - i << endl;	// result 32
  cout << i - i2 << endl;	// result -32

  cout << i - u << endl;	// result 0
  cout << u - i << endl;	// result 0

  return 0;
}
