// gl.cpp
// Observe getline()'s working.
// verdastelo
// 2016-10-26

#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

int main() {
  string mystr;
  cout << "Как тебя зовут? ";
  getline (cin, mystr);
  cout << "Тебя зовут " << mystr << ".\n";
  cout << "Your name has " << mystr.size() << " characters.\n";

  cout << "Сколько тебе лет? ";
  int age;
  getline (cin, mystr);
  stringstream(mystr) >> age;
  cout << "You are " << age * 2 << " years old.\n";
 
  return 0;
}
