// 18.cpp
// Change the value of a ptr.
// Change the value a ptr points to.
// verdastelo
// ２０１６年１１月０３日

#include <iostream>

using namespace std;

int main() {
  int i = 16, j = 32;
  int *ptri = &i;				// ptri stores i's address.
  cout << "ptri (address) == " << ptri << endl;
  cout << "ptri (points to) == " << *ptri << endl;
  ptri = &j;					// ptri stores j's address
  cout << "ptri (address) == " << ptri << endl;
  cout << "ptri (points to) == " << *ptri << endl;
  
  return 0;
}
