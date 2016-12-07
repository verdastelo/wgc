#include <iostream>
#include <fstream>
#include <string> 

int main() {
    std::ifstream in("/home/anno/Documents/aamnaSaamnaa.odt");
    std::ofstream out("тест"); 
    std::string фраза;
    while (getline (in, фраза)) {
        std::cout << фраза << std::endl;
        out << фраза << "\n";
    }
    return 0;
}
