// 15.cpp
// Find invalid expressions.
// verdastelo
// ２０１６年１１月０３日

#include <iostream>

using namespace std;

int main() {
  int ival = 1.01;	// Valid but truncates
  int &rval1 = 1.01;	// Invalid. Double assigned to an int.
  int &rval2 = ival;	// Valid. Truncated ival.
  int &rval3;		// Invalid. Not initialized.
  return 0;
}
