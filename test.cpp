#include <iostream>
using namespace std;

int main() {
  int var = 26;
  int* ptr = &var;
  int** ptr2 = &ptr;
  int secondo = var;
  cout << "var == " << var << endl; // A variable var.
  cout << "ptr == " << ptr << endl; // The address of var.
  cout << "ptr2 == " << ptr2 << endl; // The address of the address of var.
  cout << "&ptr == " << *ptr2 << endl; // The value pointed to by the second address.
  cout << "secondo == " << secondo << endl;

  char *myChar;
  short *myShort;
  long *myLong;
  ++myChar;
  ++myShort;
  ++myLong;
  cout << myChar  << endl;
  cout << myShort << endl;
  cout << myLong << endl;
  return 0;
}
