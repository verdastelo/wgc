// ref.cpp
// Play with references.
// verdastelo
// ２０１６年１１月０３日

#include <iostream>

using namespace std;

int main() {
  int num = 10;
  int &refNum = num;
  cout << "Original refNum == " << refNum << endl;
  refNum += 10;
  cout << "refNum == " << refNum << endl;
  cout << "nun == " << num << endl;
  return 0;
}
