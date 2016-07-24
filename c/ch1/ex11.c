/* 
   How would you test the word count program (/study/wc.c)? What
   kinds of input are most likely to uncover bugs if there are any?
*/

#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

int main() {
  int c, nl, nw, nc, state;

  state = OUT;

  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;

    if (c == 0x0a) ++nl;
    // 0x20 = SPACE, 0x0a = newline, 0x09 = tab
    if (c == 0x20 || c == 0x0a || c == 0x09) state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf ("lines: %d, words: %d, characters: %d\n", nl, nw, nc);
  return 0;
}

// 1. Input 这个人很热情。The character and the word count will be incorrect.
// 2. Input Тихий океан хорошая книга. The character count will be incorrect.
// 3. Standalone punctuation is counted as a word.
// 4.  

