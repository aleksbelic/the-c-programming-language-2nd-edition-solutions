/*
Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
the length of arbitrary long input lines, and as much as possible of the text.
*/

#include <stdio.h>

#define MAX_LINE_LENGTH_ALLOWED 100

int main(void)
{
    int c, current_line_length = 0, max_line_length = 0, current_line_index = 0;
    char current_line_text[MAX_LINE_LENGTH_ALLOWED];
    char longest_line_text[MAX_LINE_LENGTH_ALLOWED];

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            current_line_text[current_line_index] = '\0';

            if (current_line_length > max_line_length)
            {
                max_line_length = current_line_length;

                for (int i = 0; i <= current_line_length; i++) // <= to include the null terminator
                {
                    longest_line_text[i] = current_line_text[i];
                }
            }

            printf("%d\n", current_line_length);

            // reset for next line
            current_line_length = 0;
            current_line_index = 0;
        }
        else
        {
            if (current_line_index < MAX_LINE_LENGTH_ALLOWED - 1)
            {
                current_line_text[current_line_index++] = c;
            }
            current_line_length++;
        }
    }

    printf("Longest line (%d chars): %s\n", max_line_length, longest_line_text);

    return 0;
}

/*
short text
10
longer text
11
the longest text
16
abc
3
Longest line (16 chars): the longest text
*/
