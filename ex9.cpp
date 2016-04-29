// ex9.cpp: Четан Ананд
// Description: File processing.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  char first_name[30], last_name[30];
  int age;
  char file_name[20];

  while (!(cin != -1)) {
    cout << "Enter first name: "; cin >> first_name;
    cout << "Enter last name: "; cin >> last_name;
    cout << "Enter age: "; cin >> age;
    cout << endl;
    }

    "Enter the file's name: "; cin >> file_name;

  ofstream People (file_name, ios::out);
  People << first_name << endl << last_name << endl << age << endl;
  return 0;
}
