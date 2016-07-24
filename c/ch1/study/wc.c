#include <stdio.h>

// IN and OUT are symbolic constants. 

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* count lines, words, and characters in input */

int main() {
  // c = character
  // nl = newline (HEX A)  
  // nw = new word
  // nc = new character
  // state = a Boolean variable
  int c, nl, nw, nc, state;

  // The default state is outside a word. 	 
  state = OUT;

  // nl, nw and nc are set to zero.
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    // As long as getchar() doesn't encounter EOF, read all characters.
    // Increment nc.
    ++nc;

    // nl is incremented everytime a newline (0x0a) is encountered.
    // Because a newline is also an ASCII character, any increase in nl
    // also increases nc.
    if (c == 0x0a) ++nl;	

    // An empty space (0x20), newline (0x0a) and tab (0x09) change the state to OUT.
    if (c == 0x20 || c == 0x0a || c == 0x09) state = OUT;

    // If the program doesn't encounter a newline, a space or a tab, it means it's
    // found a word. So state is set to IN. And nw is incremented by one. 
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf ("lines: %d, words: %d, characters: %d\n", nl, nw, nc); 
  return 0;
}

/*

How does this program work?

Let's start with a simple case.

1. Input: He's a man.

a. c is 'H'
b. nc is 1.
c. Neither of the two if cases is invokved.
d. Else is invoked. 
e. state is set to 1 or IN.
f. nw is 1.
g. c is 'e'
h. nc is 2.
i. Neither of the two if cases is invoked.
j. Else is not invoked because state is IN.
k. c is '''
l. nc is 3.
m. Neither of the two if cases is invoked.
n. Else is not called because state is IN.
o. c is 's' and nc is 4
p. Neither of the two if cases is invoked.
q. Else is not called because state is IN.
r. c is an empty space and nc is set to 5.
s. The second if is invoked.
t. state is set to OUT.
u. c is 'a'
v. nc is set to 6.
w. Neither of the two if cases is invoked.
x. Else is called because state is OUT.
y. nw is now 2.
z. c is an empty space.
za. nc is set to 7.
....
....
*/ 
