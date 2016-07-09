#include <stdio.h>

/* Celsius - Fahrenheit converter.
   for-loop version.
   floating point version. */

main () {
  float fahr;
  printf ("%10s %15s\n", "Celsius", "Fahrenheit");

  for (fahr = 0; fahr <= 300; fahr += 20) {
    printf ("%10.1f %10.1f\n", (5.0/9.0) * (fahr-32), fahr);
  }
}
