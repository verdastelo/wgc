// framedGreeting.cpp: Четан Ананд
// Описание: Спрашиваете, как зовут человека и говорите « Привет! » ему.

#include <iostream>
#include <string>

using std::cin;			using std::endl;
using std::cout;		using std::string;

int main() {
  // Ask for the person's name.
  cout << "Как вас зовут? Пишите только ваше имя: ";

  // Read the name and store it.
  // Let's the memory where name is stored be called imja (имя).
  string imja;
  cin >> imja;

  // Build the message that we intend to write.
  // The message is of type string.
  // The message is stored in computer memory.
  // The part of the memory where the message is stored is called greeting.
  // "greeting" stores "Saluton, ", imja and an exclamation mark.
  const std::string greeting = "Hello, " + imja + "!";

  // The number of blanks surrounding the greeting.
  // A number 1 is stored somewhere in computer.
  // The memory occupied by 1 is called "pad."
  const int pad = 2;

  // Total number of rows and columns to write.
  // A new integer is stored in the computer's memory.
  // The new integer is pad times two plus three.
  const int rows = pad * 2 + 3;

  // A number needs to be stored and interpreted.
  // The number is the length of a string so instead of int, a new type
  // is invoked. The type is size_type from the class string.
  // size_type has properties that allow it to handle very long strings.
  const string::size_type cols = greeting.size() + pad * 2 + 2;

  // Separate the output from the input.
  std::cout << std::endl;

  // Write rows rows of output.
  int r = 0;

  // Invariant: We've written r rows so far.
  // We haven't written any row so far. So the invariant is true in the
  // beginning.
  for (int r = 0; r != rows; ++r) {
    string::size_type c = 0;
    // Invariant: We've written c characters so far in the current row.
    // No columns have been written so far. So c remains zero.
    while (c != cols) {
      // Is it time to write the greeting?
      if (r == pad + 1 && c == pad + 1) {
        cout << greeting;
        c += greeting.size();
      } else {
      //Are we on the border?
        if (r == 0 || r == rows -1 || c == 0 || c == cols - 1) cout << "*";
        else cout << " ";
        ++c;
        }
      }
     cout << endl;
    }
    return 0;
}

// First row is printed.
// 
