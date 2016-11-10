// rectangle.cpp
// A rectangle class.
// verdastelo
// 2016年11月10日

#include <iostream>
#include <string>

using namespace std;

class Rectangle {
  private:
    double length;
    double breath;
    string name;

  public:
    Rectangle (double l = 1.0, double b = 1.0, string n = "Кошмар") {
      length = l;
      breath = b;
      name = n;
    }

    double getLength() {
      return length;
    }

    double getBreath() {
      return breath;
    }

    string getName() {
      return name;
    }

    double getArea() {
      return length * breath;
    }

    bool isSquare() {
      if (length == breath) return true;
      return false;
    }
};

int main() {
  Rectangle r1 (10, 10, "Рама");
  Rectangle r2 (10, 20, "Шама");

  cout << "The field r1 belongs to " << r1.getName() << endl;
  cout << "Is " << r1.getName() << "'s field a square? " << r1.isSquare() << endl;

  cout << "The field r2 beongs to " << r2.getName() << endl;
  cout << "r2's area is " << r2.getArea() << endl;
  cout << "Is r2 a square? " << r2.isSquare() << endl;

  return 0;
} 
