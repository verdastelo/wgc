#include <stdio.h>

main() {
  int c, nl;
  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == 0xa) ++nl;
  printf ("%d lines have been printed.\n", nl);
} 
