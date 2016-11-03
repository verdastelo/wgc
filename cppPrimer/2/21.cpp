// 21.cpp
// Explain the following definitions.
// verdastelo
// ２０１６年１１月０３日

#include <iostream>

using namespace std;

int main() {
  int i = 0;			// Legal
  double* dp = &i;		// Illegal. Type mismatch.
  int *ip = i;			// Illegal. There is no object ip to dereference. 
  int *p = &i;			// Legal. A pointer to i.
  return 0;
}

