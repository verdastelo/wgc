// sayHello.cpp: Четан Ананд
// Описание: A simple program that greets you.

#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your first name: ";// The prompt.
  std::string name;				// This is a definition of name.
  std::cin >> name;				// This line causes the buffer to flush the prompt.
  std::cout << "Hello, " << name << std::endl;  // std::endl; causes the buffer to flush the greeting.
  return 0;
}
