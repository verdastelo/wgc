/* 
  Write a program to print all input lines that are longer than 80
  characters.
*/

#include <stdio.h>
#define UPPER 100000     // assuming the longest line to be 1000 chars long
#define MAXLENGTH 80   // maximum permissible length 

int getline (char line[], int maxline);
void copy (char to[], char from[]);

int main (void) {
  int len;
  char line [UPPER];
  char longer [UPPER];

  while ((len = getline(line, UPPER)) > 0)
    if (len > MAXLENGTH) {
      copy (longer, line );
      printf("%c %s %d %s %s %c", '\n', "Longer than ", MAXLENGTH, " characters. Line: ", longer, '\n');
    }
  return 0;
}

int getline (char s[], int lim) {
  int c, i;

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
