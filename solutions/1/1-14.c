/*
Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input.
*/

#include <stdio.h>
#include <ctype.h> // for "isprint" function (checks if a character is printable)

#define MAX_ASCII 128

int main(void)
{
    int c;
    int text_char_frequency[MAX_ASCII] = {0};

    while ((c = getchar()) != EOF)
    {
        if (isprint(c)) // only count printable characters
        {
            text_char_frequency[c]++;
        }
    }

    printf("Character frequency horizontal histogram:\n");
    for (int i = 0; i < MAX_ASCII; i++)
    {
        if (text_char_frequency[i] != 0)
        {
            printf("%c: ", (char)i);
            for (int j = 0; j < text_char_frequency[i]; j++)
            {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}

/* Output example:
This is just a frequency test.      // user input
Character frequency horizontal histogram:
 : *****
.: *
T: *
a: *
c: *
e: ***
f: *
h: *
i: **
j: *
n: *
q: *
r: *
s: ****
t: ***
u: **
y: *
*/
