/*
  Revise the main routine of the longest line program so it will 
  correctly print the length of arbitrarily long input lines, and
  as much as possible of the text.  
*/

#include <stdio.h>
#define MAXLINE 1000    // assuming the longest line to be 1000 chars long
#define THRESHHOLD 10   // 10 is the arbitrary long input

int getline (char line[], int maxline);
void copy (char to[], char from[]);

int main (void) {
  int len;
  int thold;                   // threshhold  
  char line [MAXLINE];
  char longer [MAXLINE];
  int llines[100];	       // llines = lines longer than THRESHHOLD

  for (int i = 0; i < 10; ++i)
    llines[i] = 0;

  thold = THRESHHOLD;

  while ((len = getline(line, MAXLINE)) > 0)
    for (int i = 0; i < 10; ++i) {
      if (len > thold) {
        llines[i] = len;
      }
    }

  for (int i = 0; i < 100; ++i)
    printf("%d%c", llines[i], ' ');
  return 0;
}

int getline (char s[], int lim) {
  int c, i;

/*
  1. getchar() reads and returns a char which is assigned to c.
  2. If c is not equal to EOF and NEW LINE, it is assigned to the s[i]
  element of array s[].
  3. The first c is assigned to s[0], the next to s[1] and so on.
  4. When NEW LINE is encountered, it assigned to s[i].
  5. i is incremented by 1 and NULL CHAR is assigned to it.
  6. i, which is the length of the line, is returned.
*/

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



