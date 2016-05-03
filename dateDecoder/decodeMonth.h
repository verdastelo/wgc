// decodeMonth.h: Четан Ананд
// Описание: Decodes month

#include <iostream>
using namespace std;

void decodeMonth (char c) {
  switch (c) {
    case 'A':
      cout << "January ";
      break;
    case 'B':
      cout << "February ";
      break;
    case 'C':
      cout << "March ";
      break;
    case 'D':
      cout << "April ";
      break;
    case 'E':
      cout << "May ";
      break;
    case 'F':
      cout << "June ";
      break;
    case 'G':
      cout << "July ";
      break;
    case 'H':
      cout << "August ";
      break;
    case 'I':
      cout << "September ";
      break;
    case 'J':
      cout << "October ";
      break;
    case 'K':
      cout << "November ";
      break;
    case 'L':
      cout << "December ";
      break;
    default:
      cout << "Illegible data. Exiting..." << endl;
      break;
  }
}

