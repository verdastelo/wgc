// privjet.cpp: Четан Ананд
// Описание: A program that greets a user and is flexible.

#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your first name: ";

  std::string name;
  std::cin >> name;

  const std::string greeting = "Hello, " + name + "!";

  const int pad = 1;
  const int rows = (pad * 2) + 3;

  std::cout << std::endl;	// separate the output from the input
  int r = 0;			// The rows rows of output.
  while (r != rows) {		// invariant: we've written r rows so far
    				// write a row for output
    std::cout << std::endl;
    ++r;
  }

  return 0;
}
