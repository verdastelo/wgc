#include <stdio.h>

/* Write a program to copy its input to its output, replacing each
   string of one or more blanks by a single blank. */

int main() {
  int c;			// To read characters.
  int inspace;			// To read SP (Пробел).

  inspace = 0;			// Сначала пробел = 0.
  while ((c = getchar()) != EOF) {
    if (inspace == 0) {
      if (c == 0x20) {
        inspace = 1;
        putchar(c);
        }
     }

    if (c != 0x20) {
      inspace = 0;
      putchar(c);
    }
  }
 
  return 0;
}

