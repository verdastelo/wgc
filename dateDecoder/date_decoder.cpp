// date_decoder.cpp: Четан Ананд
// Описание: Decodes expiration dates from food products. The encoding method is known.

#include <iostream>
#include <string>
#include "decodeMonth.h"
#include "decodeDate.h"
#include "decodeYear.h"
using namespace std;

int main() {
  cout << "Enter the encoded date: ";
  string date;
  getline (cin, date);
  cout << "The sell by date is: ";
  decodeMonth(date[0]);
  decodeDate(date[1]);
  decodeDate(date[2]);
  cout << ", ";
  decodeYear(date[3]);
  cout << endl;
  return 0;
}
