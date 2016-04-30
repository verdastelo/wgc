// ex6a.cpp: Четан Ананд
// Description: A combination problem.

#include <iostream>
using namespace std;

int main() {
  int x = 1;
  for (int i = 6; i > 0; i--) {
    x *= i;
  }
  cout << x << endl;
  return 0;
}
