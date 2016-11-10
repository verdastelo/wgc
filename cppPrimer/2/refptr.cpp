// refptr.cpp
// Pass by reference and pass by value.
// verdastelo
// 2016年11月09日

#include <iostream>

using namespace std;

int square (int);
int triple (int *);

int main() {
  int number = 8; 
  cout << "number is " << number << endl;
  cout << "&number is " << &number << endl;
  cout << "square (number) is " << square (number) << endl;
  cout << "number is " << number << endl;
  
  cout << endl;
  int newNum = 8;
  cout << "newNum is " << newNum << endl;
  cout << "&newNum is " << &newNum << endl;
  cout << "triple (& newNum) is " << triple (& newNum) << endl;
  cout << "newNum is " << newNum << endl;

  return 0;
}

int square (int n) {
    n = n*n;
    return n;
}

int triple (int * n) {
  *n = *n * *n * *n;
  return *n;
}
