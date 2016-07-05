// doit.cpp: Четан Ананд
// Описание: Найти, что делает эта программа.

#include <iostream>
using namespace std;

void doit (int &foo, int goo) {
  cout << "foo and goo are " << foo << ' ' << goo << endl;
  foo = goo + 3; // Add 5 to *foo. The result is 13.
  cout << "foo and goo are " << foo << ' ' << goo << endl;
  goo = foo + 4; // goo is 13 plus 4. The result is 17.
  cout << "foo and goo are " << foo << ' ' << goo << endl;
  foo = goo + 3; // foo is 12 plus 3. The result is 15.
  cout << "foo and goo are " << foo << ' ' << goo << endl;
  goo = foo; // goo is 15.
}

int main() {
  int *foo, *goo;
  foo = new int; // Allocate some space for an integer pointed to by foo.
  *foo = 1; // The value pointed to by foo is 1.
  cout << "*foo is " << *foo << endl;
  goo = new int; // Allocate some space for an integer pointed to by goo.
  *goo = 3; // The value pointed to by goo is 3.
  cout << "*goo is " << *goo << endl;
  *foo = *goo + 3; // The value pointed to by foo is 6.
  cout << "*foo is " << *foo << endl;
  foo = goo; // goo's address is now stored in foo. foo now points to *goo.
  cout << "foo and goo are " << foo << ' ' << goo << endl;
  *goo = 5; // goo points to 5. So does foo.
  cout << "*goo is " << *goo << endl;
  *foo = *goo + *foo; // foo's new value is 10.
  cout << "*foo is " << *foo << endl;
  cout << "*goo is " << *goo << endl;
  cout << "Now begins the function." << endl;
  doit (*foo, *goo); // *foo and *goo are 10.
  cout << (*foo) << endl; // 20, which is correct.
  return 0;
}
