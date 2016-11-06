// 23.cpp
// How will you determine if p points to a valid object?
// verdastelo
// 2016年11月06日

#include <iostream>

using namespace std;

int main() {
  int * ptr, num = 10;
  ptr = &num; // ptr holds num's address
  cout << "ptr == " << ptr << endl;	// this is an address
  cout << "&ptr == " << &ptr << endl;	// 
  cout << "num == " << num << endl;	// this is num 
  cout << "&num == " << &num << endl;	//   
  cout << "*ptr == " << *ptr << endl;	// the value pointed to by ptr
  return 0;
}
