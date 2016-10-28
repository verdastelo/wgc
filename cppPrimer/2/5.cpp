// 5.cpp
// Determine types
// verdastelo
// 2016년 10月28일 

#include <iostream> 

using namespace std;

int main() {
  cout << 'a' << endl;		// prints a (char)
  // Note: L'a' turns 'a' into an int.
  cout << L'a' << endl;		// prints a (wide)
  cout << "a" << endl;		// prints a (string)
  // Note: L"a" turns "a" into an int whose value is represented in HEX form.
  cout << L"a" << endl;		// prints a (wide string)
  
  cout << endl;

  cout << 10 << endl;		// prints 10 (int)
  cout << 10u << endl;		// prints 10 (unsigned int)
  cout << 10L << endl;		// prints 10 (long int)
  cout << 10uL << endl; 	// prints 10 (unsigned long int)
  cout << 012 << endl;		// prints 10 (012 is Octal)
  cout << 0xC << endl;		// prints 12 (0xC is Hexadecimal)

  cout << endl;

  cout << 3.14 << endl;		// prints 3.14 (double)
  cout << 3.14f << endl;	// prints 3.14 (float)
  cout << 3.14L << endl; 	// prints 3.14 (double precision)

  cout << endl; 

  cout << 10 << endl;		// prints 10 (int)
  cout << 10u << endl;		// prints 10 (unsigned int)
  cout << 10. << endl;		// prints 10 (double?)
  // Note: 10e-2 is 0.1, not 0.01. 
  cout << 10e-2 << endl;	// prints 0.01 (double)

  return 0;
}  
