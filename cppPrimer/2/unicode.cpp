// unicode.cpp
// Find out how w_char, char16_t, and char32_t work.
// verdastelo (世界语者)
// ２０１６年１０月２８日

#include <iostream>

using namespace std;

int main() {
  wchar_t zao = L'早';		// 早 estas mateno 
  char16_t xue = u'学';		// 学 estas studado 
  char32_t mei = U'美';		// 美 estas bela
  cout << "早 == " << zao << endl;
  cout << "学 == " << xue << endl;
  cout << "美 == " << mei << endl;
  return 0;
}

// Без успехи! -_- 
