// buildingBlocks.cpp: Четан Ананд
// Описание: Эта программа создаёт буквы.

#include <iostream>
#include <iomanip>
using namespace std;

void horizontalLine() {
  for (int i = 0; i < 9; i++) {
    cout << "*";
  }
  cout << endl;
}

void horizontalHalf() {
  for (int i = 0; i < 5; i++) {
    cout << "*";
  }
  cout << endl;
}

void horizontalLineLong() {
  for (int i = 0; i < 10; i++) {
    cout << "*";
  }
  cout << endl;
}

void horizontalHalfRight() {
  cout << setw(9) << setiosflags (ios::right) << "*****";
  cout << endl;
}

void verticalLeft() {
  for (int i = 0; i < 3; i++) {
    cout << "*" << endl;
  }
}

void verticalCentre() {
  for (int i = 0; i < 3; i++) {
    cout << "    *    " << endl;
  }
}

void verticalRight() {
  for (int i = 0; i < 3; i++) {
    cout << setw(9) << setiosflags(ios::right) << "*" << endl;
  }
}

void verticalParallel() {
  for (int i = 0; i < 3; i++) {
    cout << "*\t*" << endl;
  }
}

void verticalParallelHalf() {
  cout << "*\t*" << endl;
}

void verticalParallelRight() {
  for (int i = 0; i < 3; i++) {
    cout << setw(9) << setiosflags(ios::right) << "*   *" << endl;
  }
}

void verticalParallelThree() {
  for (int i = 0; i < 3; i++) {
    cout << "*   *   *" << endl;
  }
}

void rightFalling() {
  cout << "*" << endl;
  cout << "**" << endl;
  cout << "* *" << endl;
  cout << "*  *" << endl;
  cout << "*   *" << endl;
  cout << "*    *" << endl;
  cout << "*     *" << endl;
  cout << "*\t*" << endl;
}

void leftFalling() {
  cout << setw(9) << setiosflags(ios::right) << "*" << endl;
  cout << setw(9) << setiosflags(ios::right) << "**" << endl;
  cout << setw(9) << setiosflags(ios::right) << "* *" << endl;
  cout << setw(9) << setiosflags(ios::right) << "*  *" << endl;
  cout << setw(9) << setiosflags(ios::right) << "*   *" << endl;
  cout << setw(9) << setiosflags(ios::right) << "*    *" << endl;
  cout << setw(9) << setiosflags(ios::right) << "*     *" << endl;
  cout << "*\t*" << endl;
}

void verticalLeftFalling() {
  cout << "*" << setw(8) << setiosflags(ios::right) << "*" << endl;
  cout << "*" << setw(8) << setiosflags(ios::right) << "**" << endl;
  cout << "*" << setw(8) << setiosflags(ios::right) << "* *" << endl;
  cout << "*" << setw(8) << setiosflags(ios::right) << "*  *" << endl;
  cout << "*" << setw(8) << setiosflags(ios::right) << "*   *" << endl;
  cout << "*" << setw(8) << setiosflags(ios::right) << "*    *" << endl;
  cout << "*" << setw(8) << setiosflags(ios::right) << "*     *" << endl;
}

void leftRising() {
  cout << "*\t*" << endl;
  cout << setw(9) << setiosflags(ios::left) << "*     *" << endl;
  cout << setw(9) << setiosflags(ios::left) << "*    *" << endl;
  cout << setw(9) << setiosflags(ios::left) << "*   *" << endl;
  cout << setw(9) << setiosflags(ios::left) << "*  *" << endl;
  cout << setw(9) << setiosflags(ios::left) << "* *" << endl;
  cout << setw(9) << setiosflags(ios::left) << "**" << endl;
  cout << setw(9) << setiosflags(ios::left) << "*" << endl;
}

void invertedCone() {
  cout << "*   *   *" << endl;
  cout << "  * * *  " << endl;
  cout << "   ***   " << endl;
}

void cone() {
  cout << "   ***   " << endl;
  cout << "  * * *  " << endl;
  cout << "*   *   *" << endl;
}

void threeDots() {
  cout <<  "   ***   " << endl;
}

void coneWithoutLine() {
  cout << "    *    " << endl;
  cout << "  *   *  " << endl;
  cout << "*       *" << endl;
}

void invertedConeWithoutLine() {
  cout << "*       *" << endl;
  cout << "  *   *  " << endl;
  cout << "    *    " << endl;
}


