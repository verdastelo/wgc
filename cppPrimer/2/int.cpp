// int.cpp
// Find out how big int, long, and long long are on your machine.
// verdastelo (世界语者)
// ２０１６年１０月２８日

#include <iostream>

using namespace std;

int main() {
  unsigned short si = -1;	// a conversion will occur
  unsigned int ui = -1; 	// a conversion will occur 
  unsigned long ul = -1;	// a conversion will occur
  unsigned long long ull = -1;	// same as above

  cout << "short = " << si << endl;
  cout << "int = " << ui << endl;
  cout << "long = " << ul << endl;
  cout << "long long = " << ull << endl;

  unsigned short t1 = -16;
  cout << "short t1 = " << t1 << endl;
  return 0;
}	 
