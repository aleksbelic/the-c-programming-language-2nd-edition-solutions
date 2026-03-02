/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.
*/

#include <stdio.h>

int main(void)
{
    int c;
    int last_was_blank = 0; // 0 means last character was not a blank, 1 means it was a blank

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (last_was_blank == 1)
            {
                continue;
            }
            last_was_blank = 1;
        }
        else
        {
            last_was_blank = 0;
        }
        putchar(c);
    }

    return 0;
}

/* Output example:
a b
a b
a  b
a b
 a b
 a b
  a  b
 a b
*/
