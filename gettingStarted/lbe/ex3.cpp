// ex3.cpp: Четан Ананд
// Description: Guess the program's output. A multiplication table?

#include <iostream>
using namespace std;

int main() {
  // Outputs numbers from 1 to 10 in a line.
  // Это очень странно, что у меня нет книг...
  cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
  for (int c = 1; c < 10; c++) {
    cout << c << "| ";
    for (int i = 1; i < 10; i++) {
      cout << i * c << '\t';
    }
    cout << endl;
  }
  return 0;
}
