#include <stdio.h>
#define MAXLINE 1000

int getline (char line[], int maxline);
void copy (char to[], char from[]);

int main (void) {
  // memory is reserved for two ints, len and max
  int len;
  int max;

  // two arrays are created, line[] and longest[]
  char line [MAXLINE];
  char longest [MAXLINE];

  // max is initialised to zero
  max = 0;
  
  // jump to getline (char array, int);
  while ((len = getline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy (longest, line);
    }
  if (max > 0)
    printf ("%s", longest);
  return 0;
}

int getline (char s[], int lim) {
  // two ints are declared
  int c, i;

  // here lim is MAXLINE or 1000
  // c is a char which is neither EOF nor a new line
  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy (char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
