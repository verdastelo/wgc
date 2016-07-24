/*
  Write a program that prints its input one word per line.
*/

#include <stdio.h>

int main (void) {
  int c, nw;	// c = character, nw = new word
  while ((c = getchar()) != EOF) {
    if (c == 0x20 || c == 0x09 || c == 0x0a) printf("%c", '\n');
    else putchar(c);
  }
  return 0;
}
