// hexMultTabl.c: This is a hexadecimal multiplication table.

#include <stdio.h>

main() {
  int first = 0x1;
  int multiplicand;
  int multiplier;
  for (multiplicand = first; multiplicand < 0x10; multiplicand++) {
    for (multiplier = first; multiplier < 0x10; multiplier++) {
      printf ("%4.0x", multiplicand * multiplier);
    }
    printf ("\n");
  }
} 
