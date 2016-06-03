// framedGreeting.cpp: Четан Ананд
// Описание: Спрашиваете, как зовут человека и говорите « Привет! » ему.

#include <iostream>
#include <string>

int main() {
  std::cout << "Как вас зовут? Пишите только ваше имя: ";
  std::string name;
  std::cin >> name;

  const std::string greeting = "Saluton, " + name + "!";

  const std::string spaces (greeting.size(), ' ');
  const std::string second = "* " + spaces + " *";

  const std::string first (second.size(), '*');

  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;
/*
  std::cout << "Видите: " << std::endl;
  std::cout << "name.size() = " << name.size() << std::endl;
  std::cout << "spaces.size() = " << spaces.size() << std::endl;
  std::cout << "first.size() = " << first.size() << std::endl;
  std::cout << "second.size() = " << second.size() << std::endl;
*/
  return 0;
}
