#include <iostream>
#include <vector>
using namespace std;

int main() {
  int sum = 0;
  int i = 1;
  vector <int> nums (10);
  while (nums.size() < 10) {
    sum += i;
    nums.push_back (sum);
    i = sum;
  }

  for (int i = 0; i < nums.size(); i++) {
    cout << "nums[" << i << "] = \t" << nums[i] << endl;
  }
  return 0;
}
