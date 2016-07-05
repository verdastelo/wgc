// bookstore.cpp: Четан Ананд
// Описание: Estimates sales for a book store.

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

vector <string> codes;

void bookCode (string code) {
  codes.push_back (code);
}

int main() {
  string code;
  do {
    cout << "Enter the five-digit code (Press 'q' to quit.): ";
    getline (cin, code);
    bookCode (code);
    if (code.size() != 5) {
      cout << "Please enter the code in a correct format." << endl;
      cin.ignore();
    }
  } while (code != "q");

  for (int i = 0; i < codes.size(); i++) {
    cout << codes[i] << ' ' << endl;
  }
  return 0;
}

/*
void line() {
  for (int i = 0; i < 50; i++) {
    cout << "=";
  }
  cout << endl;
}

void bookInfo() {
  cout << "Enter the book's code: ";
  string code;
  getline (cin, code);
  cout << "Enter how much a book costs: ";
  double unitCost;
  cin >> unitCost;
  cout << "Enter how many books are in the store: ";
  int units;
  cin >> units;
  cout << "Enter how many students will enroll in the class: ";
  int prosEnroll; // prospective enrollment
  cin >> prosEnroll;
  cout << "Is the book required (r) or optional (o)? ";
  char c;
  cin >> c;
  cout << "Is the book new (n) or used (u)? ";
  char ch;
  cin >> ch;
  cout << endl;

  line();
  cout << setw(50) << "Here is the information we have on the book: \n";
  line();
  cout << "Book code: " << code << endl;
  cout << "Unit cost: " << unitCost << endl;
  cout << "Copies in store: " << units << endl;
  cout << "Prospective enrollment; " << prosEnroll << endl;
  cout << "Required (r) or optional (o): " << c << endl;
  cout << "New (n) or used (u): " << ch << endl;
}
*/
