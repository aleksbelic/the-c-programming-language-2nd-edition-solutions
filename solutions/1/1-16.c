/*
Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
the length of arbitrary long input lines, and as much as possible of the text.
*/

#include <stdio.h>

#define MAX_LINE_LENGTH_ALLOWED 100 // including null terminator '\0'

int main(void)
{
    int c, current_line_length = 0, max_line_length = 0;
    char current_line_text[MAX_LINE_LENGTH_ALLOWED];
    char longest_line_text[MAX_LINE_LENGTH_ALLOWED];

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            current_line_text[current_line_length] = '\0';

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
        }
        else if (current_line_length < MAX_LINE_LENGTH_ALLOWED - 1) // text will be truncated if > (MAX_LINE_LENGTH_ALLOWED - 1)
        {
            current_line_text[current_line_length++] = c;
        }
    }

    printf("Longest line (%d chars): %s\n", max_line_length, longest_line_text);

    return 0;
}

/*
e.g.
#define MAX_LINE_LENGTH_ALLOWED 20

                         // input
0
short text               // input
10
longer text              // input
11
even longer text         // input
16
abc                      // input
3
text_longer_than_allowed // input
19
Longest line (19 chars): text_longer_than_al
*/
