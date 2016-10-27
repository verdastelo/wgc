// wrange.cpp
// Spur a user to enter two numbers. Print all the integers between those two numbers.
// verdastelo
// 2016-11-27

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  cout << "Enter two numbers: ";
  string number;
  int first = 0;
  int last = 0;
  getline (cin, number);
  stringstream (number) >> first;
  getline (cin, number);
  stringstream (number) >> last;
//  if (!(first < last)) {
//    cerr << "Enter the smaller number first.\n";
//    break;
//  }

  cout << "You've entered " << first << " and " << last << "." << endl;
  
  while (first <= last) {
    cout << first << ", ";
    ++first;
   }

  cout << "\b\n";
  return 0;
}
   
