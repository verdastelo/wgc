/*
  Write a program to print a histogram of the length of words
  in its input.
*/

#include <stdio.h>

#define UPPER 21 // assuming that the longest word will be 21 char long; counterrevolutionary
#define IN 1	 // getchar() is inside a word
#define OUT 0 	 // getchar() is outside a word   
#define BOOK 0x1000 // let each asterisk represent 4096 chars in a book-length text
#define ARTICLE 0x100 // let each asterisk represent 256 chars in an article-length text

int main (void) {
  int c, i, j, ccount, state;  // ccount is character count
  int char_count[UPPER];

  // char_count[] is initialised 
  for (i = 0; i < UPPER; ++i)
    char_count[i] = 0;

  ccount = 0;
  state = IN;

  while ((c = getchar())!= EOF) {
    // It ignores all chars other than lower and upper case alphabet.
    if (((c >= 0x61) && (c <= 0x7a)) || ((c >= 0x41) && (c <= 0x5a))) 
    ++ccount;
    else {
      --ccount; 
      state = OUT;
    }

    if (state == OUT) {
      ++char_count[ccount];

      state = IN;
      ccount = 0;
    }
  }

  printf("%6s %c %10s %c", "chars", '|', "frequency",'\n');

  for (i = 1; i < UPPER; ++i) {
    printf("%6d %c", i, '|'); {
      for (j = 0; j < char_count[i-1]/ARTICLE; ++j) {
        printf("%c", '*');
      }
      printf("%c", '\n');
    }
  }
  printf("%s%c", "Each asterisk represents 4096 characters.", '\n');
  printf("%c", '\n');
  return 0;
}
