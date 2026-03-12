/*
Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input,
and to delete entirely blank lines.
*/

#include <stdio.h>

#define MAX_LINE_LENGTH_ALLOWED 20 // including null terminator '\0'

int main(void)
{
    int c, current_line_length = 0;
    char current_line_text[MAX_LINE_LENGTH_ALLOWED] = {0};

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            int terminator_index = current_line_length < MAX_LINE_LENGTH_ALLOWED
                    ? current_line_length : MAX_LINE_LENGTH_ALLOWED - 1;

            current_line_text[terminator_index] = '\0';

            for (int i = terminator_index - 1; i >= 0; i--)
            {
                if (current_line_text[i] == ' ' || current_line_text[i] == '\t')
                {
                    current_line_text[i] = '\0';
                    current_line_length = i;
                }
                else
                {
                    break;
                }
            }
            if (current_line_length > 0)
            {
                printf("%s\n", current_line_text);
            }
            current_line_length = 0;
        }
        else
        {
            if (current_line_length < MAX_LINE_LENGTH_ALLOWED - 1)
            {
                current_line_text[current_line_length] = c;
            }

            current_line_length++;
        }
    }

    return 0;
}

/* Output example when MAX_LINE_LENGTH_ALLOWED = 20
abc                         // user input
abc
abc efd                     // user input followed by blank space
abc efd
 aa                         // user input
 aa
        abc                 // user input followed by 2 tabs
        abc
this text is just too long  // user input
this text is just t
*/