// Find a circle's area if its radius is known.

#include <iostream>

int main() {
    std::cout << "Enter radius >> ";
    double radius = 0;
    std::cin >> radius;
    std::cout << "The circle with radius " << radius << " will occupy " << radius * radius * 3.14 << " square metres." << std::endl;
    return 0;
}
