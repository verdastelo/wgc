#include <stdio.h>

/* Write a program to copy its input to its output, replacing each
   string of one or more blanks by a single blank. */

/* Find a way to count consecutive blanks. */

/* 1. Read a char.
   2. Is it a blank?
   3. No. Print it.
   4. Yes. Do nothing.
   5. Read a new char.
   6. Is it a blank?
   7. No. Print it and a blank.
   8. Yes. Store it, too.
   9. Read a char.
   10. Is it a blank?
   11. No. Print it and a blank.
   12. Yes. Do nothing. 
   13... 
*/

int main() {
  char ch, ch1;
  while ((ch = getchar()) != EOF) {
   if (ch != 0x20) printf("%c", ch);
   else {
     // Do nothing.
     ;
     while ((ch1 = getchar()) != EOF) {
       if (ch1 != 0x20) printf("%c %c", 0x20, ch1);
     }
   } 
  }
  return 0;
}

