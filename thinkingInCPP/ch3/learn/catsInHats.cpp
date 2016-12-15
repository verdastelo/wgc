// this is recursion.

#include <iostream>

void removeHat (char cat) {
    for (char c = 'A'; c < cat; c++)
        std::cout << " ";
    if (cat <= 'z') {
        std::cout << "cat " << cat << std::endl;
        removeHat (cat + 1);
    } else 
        std::cout << "VOOM!!!" << std::endl;
}

int main() {
    removeHat('A');
    return 0;
}
