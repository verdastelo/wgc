// 7.cpp
// Find out what values these literals represent.
// verdastelo
// ２０１６年１０月２８日

#include <iostream>

using namespace std;

int main() {
  cout << "Who goes with F\145gurus?\12" << endl;	// \12 is a newline. \145 must be some char.
  cout << 3.14e1L << endl;				// a long double
  // Note: If a period is inserted before f. The program refuses to compile otherwise.
  cout << 1024f << endl;				// 1024.0 (a float) 
  cout << 3.14L << endl;				// a long double

  return 0;
}
