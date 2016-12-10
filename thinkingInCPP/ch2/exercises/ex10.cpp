// Create a vector with 25 floats. Square them all.
// Display the vector's values before and after squaring.

#include <iostream>
#include <vector> 
#include <iomanip>
#include <cmath>

int main() {
    std::vector <int> квадраты;

    for (int i = 0; i < 25; ++i) {
         квадраты.push_back (pow(i, 2));
    }

    std::cout << std::setw(20) << "номер " 
              << std::setw(20) << "квадрат" 
              << std::endl;

    for (int i = 0; i < 25; ++i) {
         std::cout << std::setw(10) << i 
                   << std::setw(10) << квадраты[i]
                   << std::endl;
    }

    return 0;
}

