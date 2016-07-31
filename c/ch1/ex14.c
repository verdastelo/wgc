/*
  Write a program to print a histogram of the frequencies of dif-
  ferent characters in its input.
*/

#include <stdio.h>

#define NALPHABET 26 // number of lowercase alphabet in English
#define ARTICLE 100  // each asterisk represents 100 occurrences of a letter
#define BOOK 1000    // each asterisk represents 1000 occurrences of a letter

int main (void) {
  // memory space for two integers is reserved and that space is named.
  int c, i;

  // memory space is reserved for an array, nchar[].	
  int nchar[NALPHABET]; 

  // nchar[] has NALPHABET objects. each of them is initialised to 0.
  for (i = 0; i < NALPHABET; ++i)
    nchar[i] = 0;

  // memory space is reserved for an array, nalphabet[].
  char nalphabet[NALPHABET];

  // nalphabet[] is initialised with lowercase English letters.
  for (i = 0; i < NALPHABET; ++i)
    nalphabet[i] = 0x61+i;

  // as long as getchar() is not equal to EOF
  while ((c = getchar()) != EOF)

    // check if c is a character in lowercase
    if ((c >= 0x61) && (c <= 0x7a))

      // every time a character is encountered, its corresponding 
      // element in nchar[] is incremented by 1.
      // a increments the object at index 0, b at index 1 and so on.
      ++nchar[c-'a'];
  
  printf("%c%4s| %10s| %10s%c", '\n', "char", "frequency", "histogram", '\n');
 
  for (i = 0; i < NALPHABET; ++i) {
    printf("%4c| %10d|", nalphabet[i], nchar[i]);
    for (int j = 0; j < nchar[i]/BOOK; ++j) {
      printf("%c", '*');    
    }
    printf("%c", '\n');  
  }
  
  printf("%c%cEach asterisk represents %d occurrences of a character.%c%c", '\n', '\n', BOOK, '\n', '\n');
  return 0;
}    
