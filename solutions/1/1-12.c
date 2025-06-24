/*
Exercise 1-12. Write a program that prints its input one word per line.
*/

#include <stdio.h>

int main(void)
{
    int c;
    int inWord = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (inWord)
            {
                inWord = 0;
                putchar('\n');
            }
        }
        else
        {
            inWord = 1;
            putchar(c);
        }
    }

    return 0;
}

/*
   This         is a test
This
is
a
test
*/
