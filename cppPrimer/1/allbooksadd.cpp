// allbooksadd.cpp
// Write a sum of all the transactions with the same ISBN.
// verdastelo (世界语者)
// ２０１６年１０月２７日

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {
  Sales_item currBook, book;
  cout << "Enter your books: ";
  if (cin >> book) {
    while (cin >> currBook) {
      if (currBook.isbn() == book.isbn()) cout << currBook + book << endl;
    } 
  }
  return 0;
}  
