// 20.cpp
// What does the following program do?
// verdastelo
// ２０１６年１１月０３日

#include <iostream>

using namespace std;

int main() {
  int i = 42;
  int *p1 = &i;
  *p1 = *p1 * *p1; 		// The value p1 points to is squared and is stored in i. 
   cout << "i == " << i << endl; // It must be 42 squared.
  return 0;
}

