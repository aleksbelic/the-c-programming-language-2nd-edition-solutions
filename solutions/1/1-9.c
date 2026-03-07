/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.
*/

#include <stdio.h>

int main(void)
{
    int c, last_char_is_blank = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            last_char_is_blank = 0;
        }
        else if (last_char_is_blank == 0)
        {
            putchar(c);
            last_char_is_blank = 1;
        }
    }

    return 0;
}

/* Output example:
a b         // user input
a b
a  b        // user input
a b
 a b        // user input
 a b
  a  b      // user input
 a b
*/
