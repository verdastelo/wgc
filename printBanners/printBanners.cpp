// printBanners.cpp: Четан Ананд
// Орисание: Создание большие флаги текстом.

#include <iostream>
#include <string>
#include <sstream>
#include "compare.h"
using namespace std;

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
