/*
Exercise 1-12. Write a program that prints its input one word per line.
*/

#include <stdio.h>

int main(void)
{
    int c, in_word = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (in_word)
            {
                in_word = 0;
                putchar('\n');
            }
        }
        else
        {
            in_word = 1;
            putchar(c);
        }
    }

    return 0;
}

/* Output example:
   This         is a test       // user input
This
is
a
test
*/
