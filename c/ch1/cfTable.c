#include <stdio.h>

/* print Celsius - Fahrenheit table
   for Celsius = 0, 20, 40, .... 300
   floating-point version. */

main() {
  float cels, fah;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf ("%10s %15s\n", "Celsius", "Fahrenheit");

  while (cels <= upper) {
    fah = (cels * (9.0/5.0) ) + 32.0;
    printf ("%10.0f %15.1f\n", cels, fah);
    cels += step;
  }
}
