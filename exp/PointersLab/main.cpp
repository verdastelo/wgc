#include <iostream>
#include <string>

using namespace std;

void PassByValue(int num);
void PassByRef (int &num);
class Person;

int main() {
  int num1 = 3;
  int * pNum;

  *pNum = 5;
  cout << "num1 is " << num1 << endl;
  cout << endl;

  PassByValue (num1);
  cout << "num1 is " << num1 << endl;
  cout << endl;

  PassByRef (num1);
  cout << "num1's new value is " << num1 << endl;
  cout << endl;

//  PassByValue (pNum); Commented out to continue with lab work.

  double * pDouble = new double;
  *pDouble = 19;
  cout << "*pDouble is " << *pDouble << endl;
  delete pDouble;
  cout << "*pDouble is " << *pDouble << endl; // There isn't any error message.
  return 0;
}

void PassByValue (int num) {
  cout << "The name of this function is PassByValue()" << endl;
  num++;
  cout << "and it changes num's value to " << num << endl;
} 
  
void PassByRef (int &pNum) {	// Pointers can be passed by reference. o_O
  cout << "The name of the function is PassByRef()" << endl;
  pNum = 50;
  cout << "and it changes pNum's value to " << pNum << endl;
}

class Person {
  private:
    string name;
    int age, height, weight;
  public:
    int a (int i) {return i;};
    int h (int i) {return i;};
    int w (int i) {return i;};
    string n (string n) {return n;};
//    Person (int vozrost, int linia, int gravitacia, string imja) { :
  }; 
