// sumOdd2001.cpp
// Sum of all odd numbers from 1 to 2001.
// verdastelo
// 20１６年１１月０１日

#include <iostream>

using namespace std;

int ap (int a, int l, int n) { // Arithmetic progression
  int sum {0};
  sum = (n * ( a + l)) / 2;
  return sum;
}

int main() {
  int forSum {0};
  for (int i = 1; i <= 2001; i += 2)  
    forSum += i; 
 
  int a {1}, l {2001}, n {1001};
  if (forSum == ap (a, l, n))
    cout << "The sum is " << ap (a, l, n) << endl;

  return 0;
}
