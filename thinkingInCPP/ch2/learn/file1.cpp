#include <iostream>
#include <fstream>
#include <string> 

int main() {
    std::ifstream in("файлы/сандроИзЧегема1");
    std::ofstream out("файлы/тест"); 
    std::string фраза;
    while (getline (in, фраза)) {
        std::cout << фраза << std::endl;
        out << фраза << "\n";
    }
    return 0;
}
