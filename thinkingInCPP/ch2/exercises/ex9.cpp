// Create three vectors of floats.
// Add the corressponding elements of the first two and store the result in the third.
// Display all the three vectors.

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    std::vector <double> числа;
    std::vector <double> номеры;
    std::vector <double> результаты;

    double результат;

    // create the first vector
    for (int i = 0; i < 25; ++i)
        числа.push_back (i + 3.14);

    // create a second vector
    for (int i = 0; i < 25; ++i) 
        номеры.push_back (i + 7.33);

    // store results in результаты
    for (int i = 0; i < 25; ++i) {
        результат = числа[i] + номеры[i];
        результаты.push_back (результат); 
    }

    // print title
    std::cout << std::setw(15) << "числа + "
              << std::setw(15) << "номеры = " 
              << std::setw(15) << "результаты" 
              << std::endl;

    // publish all three vectors
    for (int i = 0; i < результаты.size(); ++i) {
        std::cout << std::setw(7) << числа[i] << " + " 
                  << std::setw(7) << номеры[i] << " = "  
                  << std::setw(7) << результаты[i]
                  << std::endl;
    }
   
    std::cout << std::setw(10) << "世" << std::setw(10) << "界" << std::endl;
    return 0;
}
 
