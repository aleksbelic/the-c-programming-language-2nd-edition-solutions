/*
Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
*/

#include <stdio.h>

#define MAX_LINE_LENGTH_ALLOWED 100 // including null terminator '\0'
#define MIN_LINE_LENGTH_TO_PRINT 81 // minimum line length to print

int main(void)
{
    int c, current_line_length = 0;
    char current_line_text[MAX_LINE_LENGTH_ALLOWED] = {0};

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            int terminator_index = current_line_length < MAX_LINE_LENGTH_ALLOWED - 1 ? current_line_length : MAX_LINE_LENGTH_ALLOWED - 1;

            current_line_text[terminator_index] = '\0'; // null-terminate the current line text

            if (current_line_length >= MIN_LINE_LENGTH_TO_PRINT)
            {
                printf("%s\n", current_line_text);
            }

            // reset for next line
            current_line_length = 0;
        }
        else
        {
            if (current_line_length < MAX_LINE_LENGTH_ALLOWED - 1)
            {
                current_line_text[current_line_length] = c; // store only if available space in current_line_text
            }
            current_line_length++; // count the character even if it's not stored in current_line_text (truncated)
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
abcd
abcdef   // user input
abcd
*/