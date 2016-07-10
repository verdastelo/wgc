#include <stdio.h>

main() {
  double nc;
  for (nc = 0; getchar() != EOF; ++nc)
  ;
  printf("%.0f characters have been input.\n", nc); // 5 digits after decimal are printed if .0f is not used.
}
