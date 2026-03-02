/*
Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.
*/

#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 100 // including null terminator '\0'

void reverse_text(char line_text[]); // === void reverse_text(char* line_text)

int main(void)
{
    int c, line_length = 0;
    char line_text[MAX_LINE_LENGTH];

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            line_text[line_length] = '\0';

            reverse_text(line_text);
            printf("%s\n", line_text);

            // reset for next line
            line_length = 0;
        }
        else if (line_length < MAX_LINE_LENGTH - 1)
        {
            line_text[line_length++] = c;
        }
    }

    return 0;
}
void reverse_text(char line_text[])
{
    int line_text_length = strlen(line_text);

    for (int i = 0; i < line_text_length / 2; i++)
    {
        char temp_char = line_text[i];
        line_text[i] = line_text[line_text_length - i - 1];
        line_text[line_text_length - i - 1] = temp_char;
    }
}

/* Output example when MAX_LINE_LENGTH = 5
         // user input (new line)

a        // user input
a
ab       // user input
ba
abc      // user input
cba
abcd     // user input
dcba
abcde    // user input
dcba
abcdef   // user input
fedcba
*/