#include <iostream>
using namespace std;

int main() {
  double num = 100.0;
  double * ptr = &num;
  cout << "ptr == " << ptr << endl;
  cout << "(ptr + 1) == " << (ptr+1) << endl;
  return 0;
}
