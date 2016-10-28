// ascii.cpp
// An ASCII chart.
// verdastelo
// ２０１６年１０月２８日

#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i < 256; ++i) {
    char c = i;
    cout << i << " == " << c << endl;
  }
  return 0;
}
