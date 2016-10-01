#include <iostream>
#include <string>

using namespace std;

int main() {
  string phrase = "I live on Mars.";
  string фраза = "Я живу в Марсе.";
  string juzi = "我住在火星。";

  cout << "EN: " << phrase << endl;
  cout << "RU: " << фраза << endl;

  for (unsigned int i = 0; i < phrase.size(); ++i) {
    cout << "Char position [" << i << "]" << phrase[i] << endl;
  }

  for (unsigned int i = 0; i < фраза.size(); ++i) {
    cout << "Char position [" << i << "]" << фраза[i] << endl;
  }

  for (unsigned int i = 0; i < juzi.size(); ++i) {
    cout << "Char position [" << i << "]" << juzi[i] << endl;
  }

  return 0;
}
