#include <iostream>
using namespace std;

int main() {
  int * pint = new int;
  double * pdouble = new double;
  *pint = 3;
  *pdouble = 3;

  cout << "pint = " << pint << endl;
  cout << "sizeof(pint) = " << sizeof(pint);
  return 0;
}
