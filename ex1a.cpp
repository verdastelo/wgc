// ex1a.cpp: Четан Ананд
// Description: a program that prints the immortal saying "Hello, world!"
// Description: the program prints "Hello, world!" 24 times in a 6x4 rectangle.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << setiosflags(ios::left);
  for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 6; j++) {
            cout << setw(20);
            cout << "  اردو زبان";
      }
  cout << endl;
  }
  return 0;
}
