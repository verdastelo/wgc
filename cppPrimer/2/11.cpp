// 11.cpp
// Are the following declarations or definitions?
// verdastelo
// ２０１６年１１月０１日

#include <iostream>

using namespace std;

int main() {
  extern int ix = 1024; // This is a definition.
  int iy; 		// This is a declaration.
  extern int iz; 	// This is a declaration.
  return 0;
}
