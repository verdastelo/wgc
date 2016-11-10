// cp.cpp
// Try changing the value of a const with a pointer.
// verdastelo
// 2016年11月11日

#include <iostream>

using namespace std;

int main() {
  const double parsec = 3.2;	// 3.2 light years
  double * aliens = &parsec;    // clang doesn't permit initialization 
  cout << "parsec == " << parsec << endl;
  cout << "*aliens == " << *aliens << endl;
  return 0;
} 
