// booksales.cpp
// Reads a set of book sales transactions and writes them to the std output.
// verdastelo
// 2016-10-27

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {
  cout << "Enter your book's ISBN, the number of copies sold, sales price.\n";
  Sales_item book;
  cin >> book;
  cout << "You entered " << book << endl;
  return 0;
}
