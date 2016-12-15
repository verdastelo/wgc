// Unnamed arguments.

#include <iostream>

int square (...) {
    int x = 10;
    int y = 10;
    return x * y;
}

int main() {
    float x = 0.1;
    float y = 0.2;
//    std::cout << square (x, y) << std::endl;
    std::cout << "Can you see me? Ты меня видишь? " << std::endl;
    return 0;
}
