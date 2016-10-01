/*
  Write a function reverse(s) that reverses the character string s.
  Use it to write a program that reverses its input a line at a time.
*/

#include <stdio.h>
#define MAXLINE 100	/* maximum characters in a line */

int reverse (char line[]);

int main (void) {
  int c, i;
  char sentence[MAXLINE];

  for (i = 0; i < MAXLINE-1; ++i)
    sentence[i] = 0;
  
  while (((c = getchar()) != EOF) || (c != '\n')) {
    for (i = 0; i < (MAXLINE-1); ++i) {
      sentence[i] = c;
    }
    reverse (sentence[]); 
  }
  return 0;
}

int reverse (char line[]) {
  int i, c; 
  int j;
  for (i = 0; i < MAXLINE-1; ++i)
    if ((c = line[i]) == 0) 
      j = i;
  return j;
}
