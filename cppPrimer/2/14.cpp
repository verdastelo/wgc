// 14.cpp
// Is the following program legal?
// verdastelo
// ２０１６年１１月０１日

#include <iostream>

using namespace std;

int main() {
  int i = 100, sum = 0;
  for (int i = 0; i != 10; ++i) 
    sum += i;
  cout << "i == " << i << " and sum == " << sum << endl;
  return 0;
}

/*
 * sum's value changes because it isn't redefined in the for-block.
 * i is redefined so its new value is lost with the end of the block.
 */ 
