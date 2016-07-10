// hexMultTabl.c: This is a hexadecimal multiplication table.

#include <stdio.h>

main() {
  int multiplicand;
  int multiplier;
  for (multiplicand = 0x1; multiplicand < 0x10; multiplicand++) {
    for (multiplier = 0x1; multiplier < 0x10; multiplier++) {
      printf ("%4.0x", multiplicand * multiplier);
    }
    printf ("\n");
  }
} 
