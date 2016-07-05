// classesRectangle.cpp: Четан Ананд
// Описание: Understand classes.

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int, int);
    int area() {return width * height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main() {
  Rectangle rect, rectb, rectc;
  rect.set_values (3, 4);
  rectb.set_values (12, 5);
  cout << "area of rect: " << rect.area() << endl;
  cout << "area of rectb: " << rectb.area() << endl;
  cout << "area of rectc: " << rectc.area() << endl;
  return 0;
}
