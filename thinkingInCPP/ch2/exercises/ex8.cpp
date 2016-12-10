// Create a vector using the for-loop, put 25 floats in it, and   
// display the vector.

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    std::vector <double> doubles;
    double плавающаяЗапятая = 0.1;

    // putting 25 floats in a vector.
    for (int i = 0; i < 25; ++i) {
        плавающаяЗапятая += i; 
        doubles.push_back(плавающаяЗапятая);
    }

    // table title
    std::cout.width(50);
    std::cout << std::right << "Плавающие запятые\n" << std::endl;

    // printing the numbers 
    for (int i = 0; i < doubles.size(); ++i) {
       std::cout.setf (std::ios::floatfield, std::ios::fixed);
       std::cout.width(10);
       std::cout << std::left << char(i+97) ;
       std::cout << std::right << doubles[i] << std::endl;
    }
    return 0;
}

