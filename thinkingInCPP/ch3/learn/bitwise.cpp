// Find out how bitwise operators work.

#include <iostream>

int main() {
    std::cout << "(1 & 1) == " << (1 & 1) << std::endl;
    std::cout << "(1 & 0) == " << (1 & 0) << std::endl;
    std::cout << "(1 | 0) == " << (1 | 0) << std::endl;
    std::cout << "(1 ^ 0) == " << (1 ^ 0) << std::endl;
    std::cout << "~0 == " << ~0 << std::endl;
    std::cout << "~0xE == " << ~1 << std::endl;
    return 0;
}
