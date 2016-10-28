// 6.cpp
// Identify literals. To run this program, you'll have to comment out several lines.
// verdastelo
// ２０１５年１０月２８日

#include <iostream>

using namespace std;

int main() {
  int month = 7, day = 9;	// prints 7 and 9
  int month = 07, day = 09;	// prints 7 and an error

  int день = 09;		// test case. confirms the prediction.
  cout << "день == " << день << endl;

  return 0;
}
