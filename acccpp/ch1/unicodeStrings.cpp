// unicodeStrings.cpp: Четан Ананд
// Описание: Play with unicode strings.

#include <iostream>
#include <string>

using namespace std;

int main() {
  string esperanto = "ĵurnalo"; // ĵurnalo = magazine
  string russian = "журнал"; 	// журнал = magazine
  string punjabi = "ਮੈਗਜ਼ੀਨ"; 	// ਮੈਗਜ਼ੀਨ = magazine
  string korean = "일보"; 	// 일보 = newspaper
  string chinese = "学霸";	// 学霸 = nerd (or studious)

  cout << "esperanto.size() = " << esperanto.size() << " (not 7)" << endl;
  cout << "russian.size() = " << russian.size() << " (not 6)" <<  endl;
  cout << "punjabi.size() = " << punjabi.size() << " (not 4)" << endl;
  cout << "korean.size() = " << korean.size() << " (not 2)" << endl;
  cout << "chinese.size() = " << chinese.size() << " (not 2)" << endl;

  return 0;
}
