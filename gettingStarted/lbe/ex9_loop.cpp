// ex9_loop.cpp: Четан Ананд
// Description: Read several sets of data. Read them all.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  char first_name[30], last_name[30];
  int age;
  char file_name[20];

  cout << "Write your first and last names and your age.\n";

  while (1) {

    cout << "Что твое имя? "; cin >> first_name;
    cout << "Что твоя фамилия? "; cin >> last_name;
    cout << "Сколько у тебя лет? "; cin >> age;
    cout << endl;

    cout << "Done?\n";
    char c;
    cin >> c;
    if (c == 'y') break;

  }

  cout <<  "Пиши, как будет называется файл: "; cin >> file_name;

  ofstream People (file_name, ios::out);
  People << first_name << endl << last_name << endl << age << endl;

  ifstream people_in (file_name);
  while (1) {
    people_in >> first_name >> last_name >> age;
    if (people_in.eof()) break;

    cout << endl << "Имя: " << first_name;
    cout << endl << "Фамилия: " << last_name;
    cout << endl << "Возрость:" << age;
    cout << endl;
  }

  people_in.close();

  return 0;
}
