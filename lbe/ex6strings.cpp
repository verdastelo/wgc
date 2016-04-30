// ex6strings.cpp: Четан Ананд
// Description: Guess the output.

#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "To be or not to be, that is the question";
  string str2 = "only ";
  string str3 = str1.substr(6, 12); // Start from index 6 and copy 12 characters or bits of data.
  str1.insert (32, str2); // Append str2 to index 32 of str1.
  str1.replace (str1.find("to be", 0), 5, "to jump"); // find.("to be") locates the string.
  // 5 is the number of characters to be replaced.
  // "to jump" is the subsitute.
  str1.erase(9,4);
  cout << str1 << endl;
  for (int i = 0; i < str3.length(); i++)
    cout << str3[i]; cout << endl;
  return 0;
}
