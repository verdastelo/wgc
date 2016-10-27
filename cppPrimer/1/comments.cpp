// comments.cpp
// Exercise 1.8 of C++ Primer.
// verdastelo
// 2016-10-27

#include <iostream>

using namespace std;

int main() {
//  cout << "/*"; // This will work.
//  cout << "*/"; // This will work, too.
  // After two quotes--one at the beginning and another at the end.
  // And two backslashes, this expression should function now.
//  cout << "/* \"*/\" */"; // This can't work because there is no RVAL for the insertion operator.
//  cout << /* "*/" /* "/*" */; // If comments ignore the literals between two ", this expression should work. Else, it can't.

//  cout << /* "*/" /* "/*" */; // If comments ignore the literals between two ", this expression should work. Else, it can't.

  cout << /* "*/";

  return 0;
}
