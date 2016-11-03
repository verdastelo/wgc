// 16.cpp
// Valid and invalid assignments.
// verdastelo
// ２０１６年１１月０３日

#include <iostream>

using namespace std;

int main() {
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;
  r2 = 3.14159;		// Valid (d and r2 are pi)
  cout << "r2 == " << r2 << endl;

  r2 = r1;		// Valid  (d and r2 are 0)
  cout << "r2 == " << r2 << endl;

  i = r2;		// Valid (i and r1 are 0) 
  cout << "i == " << i << endl;

  r1 = d;		// Valid (i and r1 are 0)
  cout << "r1 == " << r1 << endl;

  return 0;
}
  
