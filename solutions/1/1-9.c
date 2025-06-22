/*
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.
*/

#include <stdio.h>

int main(void)
{
    int c;
    int lastWasBlank = 0; // 0 means last character was not a blank, 1 means it was a blank

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (lastWasBlank == 1)
            {
                continue;
            }
            lastWasBlank = 1;
        }
        else
        {
            lastWasBlank = 0;
        }
        putchar(c);
    }

    return 0;
}

/*
a b
a b
a  b
a b
 a b
 a b
  a  b
 a b
*/
