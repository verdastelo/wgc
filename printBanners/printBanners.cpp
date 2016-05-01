// printBanners.cpp: Четан Ананд
// Орисание: Создание большие флаги текстом.

#include <iostream>
#include <string>
#include <sstream>
#include "letters.h"
using namespace std;

int main() {
  cout << "Пишите фразу/Skribu frazon: ";
  string fraza; // фраза
  getline (cin, fraza);
  cout << "У фразы " << fraza.size() << " букв." << endl;
  cout << "En la frazo estas " << fraza.size() << " literoj." << endl;
  for (int i = 0; i < fraza.size(); i++) {
    cout << fraza[i] << endl;
  }
  return 0;
}
