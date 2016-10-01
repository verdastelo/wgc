#include <iostream>

int main() {
  std::cout << "Enter two numbers: " << std::endl;
  int i1, i2;
  if (std::cin >> i1 >> i2) {
    while (i1 < i2) {
      std::cout << i1 << std::endl;
      i1++;
    }
    while (i2 < i1) {
      std::cout << i2 << std::endl;
      i2++;
    }
  }
  else {
    std::cout << "You didn't enter the numbers correctly." << std::endl;
    std::cout << "Restart the program and enter two numbers." << std::endl;
   }
  return 0;
}
