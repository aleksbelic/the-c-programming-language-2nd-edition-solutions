/*
Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.
*/

#include <stdio.h>

#define MAX_LINE_LENGTH 5

int main(void)
{
    int c;
    char line_text[MAX_LINE_LENGTH];
    char line_reversed_text[MAX_LINE_LENGTH];
    int line_length = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            line_text[line_length] = '\0';

            for (int i = line_length - 1; i >= 0; i--)
            {
                line_reversed_text[line_length - i - 1] = line_text[i];
            }
            line_reversed_text[line_length] = '\0';

            printf("%s\n", line_reversed_text);
            line_length = 0;
        }
        else if (line_length < MAX_LINE_LENGTH)
        {
            line_text[line_length++] = c;
        }
    }

    return 0;
}

/*
e.g.
#define MAX_LINE_LENGTH 5

         // input

a        // input
a
ab       // input
ba
abc      // input
cba
abcd     // input
dcba
abcde    // input
edcba
abcdef   // input
edcba

*/