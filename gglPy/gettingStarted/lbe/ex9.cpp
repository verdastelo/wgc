// ex9.cpp: Четан Ананд
// Description: File processing.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  char first_name[30], last_name[30];
  int age;
  char file_name[20];

    cout << "Что твое имя? "; cin >> first_name;
    cout << "Что твоя фамилия? "; cin >> last_name;
    cout << "Сколько у тебя лет? "; cin >> age;
    cout << endl;

    "Пиши, как будет называется файл: "; cin >> file_name;

  ofstream People (file_name, ios::out);
  People << first_name << endl << last_name << endl << age << endl;
  return 0;
}
