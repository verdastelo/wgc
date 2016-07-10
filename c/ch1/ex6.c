/*
   The idea. getchar() accepts input. 
   The input can be either EOF or not EOF.
   There isn't a third alternative.
   If the input is not EOF, it prints one.
   If it's Ctrl+D it prints 0.
*/


#include <stdio.h>

main() {
  int c;
  c = getchar();
  printf("The expression (getchar() != EOF) evaluates to %d.\n", (getchar() != EOF));
}

