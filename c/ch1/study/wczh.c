#include <stdio.h>

int main() {
  int c, nc, c_zh; 
  
  nc = c_zh = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
  }

  c_zh = nc/3; // A Chinese character is three bytes long.
  printf ("字: %d\n", c_zh);
  return 0;
}


