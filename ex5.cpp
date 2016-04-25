// ex5.cpp: Четан Ананд
// Description: Brute force. Animals.

#include <iostream>
using namespace std;

int main () {

  for (int h = 0; h < 100; h++)
    for (int p = 0; p < 100; p++)
      for (int r = 0; r < 100; r++)
        if ((h + p + r) == 100)
          if (((10 * h) + (3 * p) + (0.5 * r)) == 100)
            cout << "Found one! " << h << " horses " << p << " pigs " << r << " rabbits "  << endl;
}

/*#include <iostream>
using namespace std;

int main() {
  double const a_horse_costs = 10.0;
  double const a_pig_costs = 3.0
  double const a_rabbit_costs = 0.50;

  int const animals_bought = 100; // US $100
  int const money_spent = 100; // US $100

  int horses_bought = 0;
  int pigs_bought = 0;
  int rabbits_bought = 0;

  money_spent = ((a_horse_costs * horses_bought) + (a_pig_costs * pigs_bought) + (a_rabbit_costs * rabbits_bought));
  
*/
