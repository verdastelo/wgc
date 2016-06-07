// framedGreeting.cpp: Четан Ананд
// Описание: Спрашиваете, как зовут человека и говорите « Привет! » ему.

#include <iostream>
#include <string>

using std::cin;			using std::endl;
using std::cout;		using std::string;

int main() {
  // Ask for the person's name.
  cout << "Как вас зовут? Пишите только ваше имя: ";

  // Read the name.
  string name;
  cin >> name;

  // Build the message that we intend to write.
  const std::string greeting = "Saluton, " + name + "!";

  // The number of blanks surrounding the greeting.
  const int pad = 1;

  // Total number of rows and columns to write.
  const int rows = pad * 2 + 3;
  const string::size_type cols = greeting.size() + pad * 2 + 3;

  // Separate the output from the input.
  std::cout << std::endl;

  // Write rows rows of output.
  int r = 0;

  // Invariant: We've written r rows so far.
  for (int r = 0; r != rows; ++r) {
    string::size_type c = 0;

    // Invariant: We've written c characters so far in the current row.
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
