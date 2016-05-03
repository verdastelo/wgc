// decodeDate.h: Четан Ананд
// Описание: Decodes date. The encoding scheme is known.

#include <iostream>
using namespace std;

void decodeDate (char c) {
  switch (c) {
    case 'Q':
      cout << 1;
      break;
    case 'R':
      cout << 2;
      break;
    case 'S':
      cout << 3;
      break;
    case 'T':
      cout << 4;
      break;
    case 'U':
      cout << 5;
      break;
    case 'V':
      cout << 6;
      break;
    case 'W':
      cout << 7;
      break;
    case 'X':
      cout << 8;
      break;
    case 'Y':
      cout << 9;
      break;
    case 'Z':
      cout << 0;
      break;
  }
}
