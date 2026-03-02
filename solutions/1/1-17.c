/*
Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
*/

#include <stdio.h>

#define MAX_LINE_LENGTH_ALLOWED 100 // including null terminator '\0'
#define MIN_LINE_LENGTH_TO_PRINT 81 // minimum line length to print

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
        else if (current_line_length < MAX_LINE_LENGTH_ALLOWED - 1) // text will be truncated if > (MAX_LINE_LENGTH_ALLOWED - 1)
        {
            current_line_text[current_line_length++] = c;
        }
    }

    return 0;
}

/* Output example when MAX_LINE_LENGTH_ALLOWED = 5 and MIN_LINE_LENGTH_TO_PRINT = 3
a        // user input
ab       // user input
abc      // user input
abc
abcd     // user input
abcd
abcde    // user input
abcde
abcdef   // user input
abcdef
*/