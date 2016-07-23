// Write a program to copy its input to its output, replacing each
// tab by \t, each backspace by \b and each backslash by \\. This makes tabs
// and backspaces visible in an unambiguous way.

#include <stdio.h> 

int main() {
  int c;			// c is a character
  while ((c = getchar()) != EOF) {
    if (c == 0x09) printf("%s", "\\t");
    if (c == 0x08) printf("%s", "\\b");
    if (c == 0x5c) printf("%s", "\\");
    if ((c != 0x8) || (c != 0x9) || (c != 0x5c)) putchar(c); 
  }
  return 0;
}
