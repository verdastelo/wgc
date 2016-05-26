// framedGreeting.cpp: Четан Ананд
// Описание: Ask for a person's name, and generate a framed greeting.

#include <iostream>
#include <string>

int main() {
  std::cout << "Как вас зовут? Пишите только ваше имя: ";
  std::string name;
  std::cin >> name;

  const std::string greeting = "Привет, " + name + "!";

  const std::string spaces ((greeting.size() + 2)/2, ' ');
  const std::string second = "* " + spaces + " *";

  const std::string first (second.size()-4, '*');

  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;

  std::cout << "NOTE: " << std::endl;
  std::cout << "name.size() = " << name.size() << std::endl;

  return 0;
}
