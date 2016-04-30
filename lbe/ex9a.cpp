// ex9a.cpp: Четан Ананд
// Description: Read a file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream readFiles;
  readFiles.open("четан"); // This is the file to be read.
  char output[1000]; // This is a character array.
  if (readFiles.is_open()) { // .is_open is a boolean public member function.
    while (!readFiles.eof()) { // 
      readFiles >> output;
      cout << output;
    }
  }

  readFiles.close();
  cout << endl;
  return 0;
}
