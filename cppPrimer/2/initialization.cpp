// initialization.cpp
// Four ways to initialize int objects.
// verdastelo
// ２０１６年１０月３１日

#include <iostream>

using namespace std;

int main() {
  int i = 10;
  int j {10};
  int k = {10};
  int l (10);
  cout << i << ' ' << j << ' ' << k << ' ' << l << endl;

  double d {10.0};
  double e = {11.0};

  int di {d};
  int de {e};

  cout << di << ' ' << de << endl;
 
  return 0;
} 
