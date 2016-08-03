/*
    Rewrite the temperature conversion program of Section 1.2 to 
    use a function for conversion.
*/

#include <stdio.h>

void fahrCelsius();

int main() {
  fahrCelsius();
  return 0;
}

void fahrCelsius (void) {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("%3s %6s\n", "F", "C");
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
