// 10.cpp: Find initial variables from the following program.
// verdastelo
// ２０１６年１１月０１日

#include <iostream>
#include <string>

using namespace std;

string global_str;
int global_int;

int main() {
  string local_str;
  int local_int;
  
  cout << "global_str = " << global_str << endl;
  cout << "local_str = " << local_str << endl;
  cout << "global_int = " << global_int << endl;
  cout << "local_int = " << local_int << endl;

  return 0;
}

