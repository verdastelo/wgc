// privjet.cpp: Четан Ананд
// Описание: A program that greets a user and is flexible.

#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;
  const std::string greeting = "Hello, " + name + "!";
  std::cout << greeting << std::endl;
  return 0;
}
