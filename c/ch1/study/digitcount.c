#include <stdio.h>

/* count digits, white space, others */

int main() {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0; // Why does this expression work?

  // This code block initialises ndigit[].
  // ndigit[] is an array.
  for (i = 0; i < 10; ++i) 
    ndigit[i] = 0;

  // If c is between 0x30 and 0x39, it is added to ndigit[].
  while ((c = getchar()) != EOF) 
  // c is an int. It is compared with two ints.
    if (c >= 0x30 && c <= 0x39) 
  // 0 minus 0 is 0. 
      ++ndigit[c-0x30];
  // This is simple.
  // SP, TAB and NEWLINE
    else if (c == 0x20 || c == 0x0a || c == 0x09)
      ++nwhite;
  // This one takes care of the alphabet.
    else 
      ++nother;

  printf("digits = ");
  // Prints the entire array.
  for (i = 0; i < 10; ++i)
    printf (" %d", ndigit[i]);
  printf(", white space = %d, other = %d\n", nwhite, nother);
 
  return 0;
} 
