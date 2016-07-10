#include <stdio.h>

/* Write a program to count blanks, tabs and newlines. */

main () {
  int b, t, nl; // b = blank, t = tab, nl = newline
  int c;
  
  c = 0;
  b = 0;
  t = 0;
  nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == 0x20) ++b; // Hex 20 is the ASCII value for blank space.
    if (c == 0x9) ++t;  // Hex 9 is the ASCII value for \t. 
    if (c == 0xA) ++nl; // Hex A is the ASCII value for \n.
    }

  printf ("There are %d blanks, %d tabs and %d newlines in the text.\n", b, t, nl);

}
