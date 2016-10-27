// bookadd.cpp
// Sum two Sales_item objects if their ISBN is identical.
// verdastelo
// 2017-10-27

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {
  Sales_item book1, book2;
  cout << "Enter your books.\n";
  cin >> book1 >> book2;
  if (book1.isbn() == book2.isbn()) {
    cout << book1 + book2 << endl;
  }
  else {
    cout << "You entered books with dissimilar ISBN." << endl;
  }
  return 0;
} 
