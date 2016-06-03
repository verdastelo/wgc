// size_type.cpp: Четан Ананд
// Описание: Run size_type on Unicode strings.

#include <iostream>
#include <string>

int main() {
  std::cout << "Write your name in Cyrillic: ";

  std::string name;
  std::cin >> name;

  std::string::size_type name_length = name.size();

  std::cout << "Your name " << name << " has " << name_length << " characters." << std::endl;

  return 0;
}
