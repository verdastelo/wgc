// printBanners.cpp: Четан Ананд
// Орисание: Создание большие флаги текстом.

#include <iostream>
#include <string>
#include <sstream>
#include "lettersEN.h"
using namespace std;

void compare (char c) {
  switch (c) {
    case 'a':
      letterA();
      break;
    case 'A':
      letterA();
      break;
    case 'b':
      letterB();
      break;
    case 'B':
      letterB();
      break;
    case 'c':
      letterC();
      break;
    case 'C':
      letterC();
      break;
    case 'd':
      letterD();
      break;
    case 'D':
      letterD();
      break;
    case 'e':
      letterE();
      break;
    case 'E':
      letterE();
      break;
    case 'f':
      letterF();
      break;
    case 'F':
      letterF();
      break;
    case 'g':
      letterG();
      break;
    case 'G':
      letterG();
      break;
    case 'h':
      letterH();
      break;
    case 'H':
      letterH();
      break;
    case 'i':
      letterI();
      break;
    case 'I':
      letterI();
      break;
    case 'j':
      letterJ();
      break;
    case 'J':
      letterJ();
      break;
    case 'k':
      letterK();
      break;
    case 'K':
      letterK();
      break;
    case 'l':
      letterL();
      break;
    case 'L':
      letterL();
      break;
    case 'm':
      letterM();
      break;
    case 'M':
      letterM();
      break;
    case 'n':
      letterN();
      break;
    case 'N':
      letterN();
      break;
    case 'o':
      letterO();
      break;
    case 'O':
      letterO();
      break;
    case 'p':
      letterP();
      break;
    case 'P':
      letterP();
      break;
    case 'q':
      letterQ();
      break;
    case 'Q':
      letterQ();
      break;
    case 'r':
      letterR();
      break;
    case 'R':
      letterR();
      break;
    case 's':
      letterS();
      break;
    case 'S':
      letterS();
      break;
    case 't':
      letterT();
      break;
    case 'T':
      letterT();
      break;
    case 'u':
      letterU();
      break;
    case 'U':
      letterU();
      break;
    case 'v':
      letterV();
      break;
    case 'V':
      letterV();
      break;
    case 'w':
      letterW();
      break;
    case 'W':
      letterW();
      break;
    case 'X':
      letterX();
      break;
    case 'x':
      letterX();
      break;
    case 'y':
      letterY();
      break;
    case 'Y':
      letterY();
      break;
    case 'z':
      letterZ();
      break;
    case 'Z':
      letterZ();
      break;
    default:
      cout << "Exiting..." << endl;
      break;
  }
}

int main() {
  cout << "Write your name: ";
  string name;
  getline (cin, name);
  for (int i = 0; i < name.size(); i++) {
    compare (name[i]);
    cout << endl;
  }
  return 0;
}
