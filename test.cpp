#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main(void) {
  double angle = 90.0;
  cout << "cos(" << angle << ") " << cos (angle) << endl;
  cout << "sin(" << angle << ") " << sin (angle) << endl;
  double initialVelocity = 200.0; // 100 metres per second
  double range = 0.0;
  double gravity = 9.8; // Acceleration due to gravity
  double time = 0.0;
  time = ((2 * (initialVelocity * sin (angle))) / gravity);
  double velocityX = 0.0; // Velocity along the x-axis
  velocityX = (initialVelocity * cos (angle));
  range = velocityX * time;
  cout << "Range is " << range << endl;
  cout << "Time is " << time << endl;
  cout << "Velocity along the x-axis is " << velocityX << endl;
  return 0;
}
