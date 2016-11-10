// ptr.cpp
// Valid and invalid pointers.
// verdastelo
// 2016年11月07日

#include <iostream>

using namespace std;

int main() {
  int num {10};
  int * ptr {&num};
  cout << "num == " << num << endl;
  cout << "ptr == " << ptr << endl;
  cout << "&num == " << &num << endl;
  cout << "*ptr == " << *ptr << endl;

  *ptr = 20;
  cout << "new num == " << num << endl;
  cout << "new *ptr == " << *ptr << endl;
  cout << "new ptr == " << ptr << endl;
  cout << "new &num == " << &num << endl;
 
  return 0;
} 
