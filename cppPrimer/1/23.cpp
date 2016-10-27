// 23.cpp
// Count transactions for each ISBN. Test the program.
// verdastelo (世界语者)
// ２０１６年１０月２７日

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {
  Sales_item currBook, testBook;
  cout << "Enter books' ISBN, quantity sold, and sales price.\n";
  if (cin >> testBook) {
    int books = 1;
    while (cin >> currBook) {
      if (currBook.isbn() == testBook.isbn()) {
        ++books;
      }
      else {
        cout << books << " of ISBN " << currBook.isbn() << " were sold.\n";
        cout << "Details: " << currBook << '\n';
        testBook = currBook;
        books = 1;
      }
    }
    cout << books << " of ISBN " << currBook.isbn() << " were sold.\n";
  }
  return 0;
}
