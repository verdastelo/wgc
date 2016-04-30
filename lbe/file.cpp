// file.cpp: Четан Ананд
// Description: How to create files with C++?

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream myfile;
  string output;

  myfile.open ("текст");
  myfile.getline (cin, текст);  myfile >> output;
  cout << output;

  myfile.close();
  return 0;
}
