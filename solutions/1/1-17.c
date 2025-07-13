/*
Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
*/

#include <stdio.h>

#define MAX_LINE_LENGTH_ALLOWED 100
#define MIN_LINE_LENGTH_TO_PRINT 81

int main(void)
{
    int c, current_line_length = 0;
    char current_line_text[MAX_LINE_LENGTH_ALLOWED];

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            current_line_text[current_line_length] = '\0';

            if (current_line_length >= MIN_LINE_LENGTH_TO_PRINT)
            {
                printf("%s\n", current_line_text);
            }

            // reset for next line
            current_line_length = 0;
        }
        else if (current_line_length < MAX_LINE_LENGTH_ALLOWED)
        {
            current_line_text[current_line_length++] = c;
        }
    }

    return 0;
}

/*
e.g.
#define MAX_LINE_LENGTH_ALLOWED 5
#define MIN_LINE_LENGTH_TO_PRINT 3

a        // input
ab       // input
abc      // input
abc
abcd     // input
abcd
abcde    // input
abcde
abcdef   // input
abcde
*/