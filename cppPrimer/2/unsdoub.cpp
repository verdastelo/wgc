// unsdouble.cpp
// Do unsigned doubles exist?
// verdastelo (世界语者)
// ２０１６年１０月２８日

#include <iostream>

using namespace std;

int main() {
  unsigned double rate = 10.91;
  cout << rate << endl;
  return 0;
}

/*
 * Response
 * unsdoub.cpp:11:3: error: 'double' cannot be signed or unsigned
 * unsigned double rate = 10.91;
 *  ^
 * 1 error generated.
 */
