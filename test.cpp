#include <iostream>
#include <string>
using namespace std;

int main() {
 cout << "Enter an 8-bit binary number: ";
  string binary;
  getline (cin, binary);
  if (binary[0] == '1') {
    cout << "The number is negative." << endl;
    for (int i = 1; i < binary.size(); i++) {
      if (binary[i] == '1') binary[i] == 0;
      if (binary[i] == '0') binary[i] == 1;
    }
  cout << binary.size() << endl;
  }
  else cout << "Привет!" << endl;
 return 0;
}
