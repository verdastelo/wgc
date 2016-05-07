// artilleryFire.cpp: Четан Ананд
// Описание: A cannon ball game.

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

const double PI = 3.14159;

using namespace std;

void StartUp(void) {
  cout << "You are in the middle of a war and ";
  cout << "being charged by thousands of enemies." << endl;
  cout << "You have only one cannon, which you can shoot at any angle." << endl;
  cout << "You have only 10 cannonballs for this target..." << endl;
  cout << "Let's begin..." << endl;
}

double angleToDistance (double angle) {
  double initialVelocity = 200.0; // 200 metres per second
  double range = 0.0;
  double gravity = 9.8; // Acceleration due to gravity
  double time = 0.0;
  time = ((2 * (initialVelocity * sin (angle * (PI/180)))) / gravity);
  double velocityX = 0.0; // Velocity along the x-axis
  velocityX = (initialVelocity * cos (angle * (PI/180)));
  range = velocityX * time;
  return range;
}

int Fire(void) {
  double enemyDistance = 0;
  int killed = 0;
  srand (time(NULL));
  enemyDistance = (rand() % 1000 + 1);
  cout << "The enemy is " << enemyDistance << " metres away." << endl;

  cout << "What angle? ";
  double angle;
  cin >> angle;
  if (enemyDistance == angleToDistance(angle)) killed++;
  if (enemyDistance > angleToDistance(angle)) {
    cout << "Your cannonball fell " << angleToDistance(angle) << " metres away." << endl;
    cout << "You under shot by " << enemyDistance - angleToDistance(angle) << " meters." << endl;
  }
  if (enemyDistance < angleToDistance(angle)) {
    cout << "Your cannonball fell " << angleToDistance(angle) << " metres away." << endl;
    cout << "You over shot by " << angleToDistance(angle) - enemyDistance << " metres." << endl;
  }
  return killed;
}

int main(void) {
  StartUp(); // Display the introductory script.
  int killed = 0;
  int shots = 10;
  char c = ' ';
  do {
    killed = Fire(); // Fire() contains the main loop of each round.
    cout << "I see another one, care to shoot again? (Y/N) " << endl;
    cin >> c;
    shots--;
  } while ((c != 'n') or (shots == 0));
  cout << "You killed " << killed << " of the enemy." << endl;
  return 0;
}
