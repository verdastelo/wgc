// passValByRef.cpp: Четан Ананд
// Описание: Write a function called accelerate() that takes as input the speed of a vehicle, and an amount.
// The function adds the amount to the speed to accelerate the vehicle.
// The speed parameter should be passed by reference, and amount by value.

#include <iostream>
using namespace std;

double accelerate (int& velocity) {
  double acc = 9.8; // Acceleration due to gravity is 9.8 metres per second squared.
  velocity += acc;
  return velocity;
}

int main (void) {
  cout << "Enter velocity: ";
  int vel;
  cin >> vel;
  cout << "Velocity after acceleration is " << accelerate (vel) << endl;
  cout << "Velocity before acceleration is " << vel << endl;
  return 0;
}
