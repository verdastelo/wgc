#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int number = 0;
    std::cin >> number;
    std::cout << "You entered " << number
         << " whose octal and hexade"
         << "cimal forms are " << std::oct 
         << number << " and " << std::hex
         << number << "." << std::endl; 
    return 0;
}

// Lesson: 
// std::oct and std::hex work on integers, but not on doubles. 
