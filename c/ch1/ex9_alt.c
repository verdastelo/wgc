/* Write a program to copy its input to its output, replacing each
   string of one or more blanks by a single blank. */

#include <stdio.h>

int main(void) {
  char c;

  while ((c = getchar()) != EOF) {
    putchar(c);
    if (c == 0x20) {
      while ((c = getchar()) == 0x20);
      putchar(c);
    }
  }
   return 0;
} 
