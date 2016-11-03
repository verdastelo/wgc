// 17.cpp
// Figure out the output of this code.
// verdastelo
// ２０１６年１１月０３日

#include <iostream>

using namespace std;

int main() {
  int i, &ri = i;
  i = 5; ri = 10;
  if ((i == 10) and (ri == 10)) 
    cout << "i == " << i << " and ri == " << ri << endl;
  return 0;
}
