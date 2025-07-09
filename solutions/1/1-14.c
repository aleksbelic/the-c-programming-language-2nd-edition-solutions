/*
Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input.
*/

#include <stdio.h>
#include <ctype.h> // for isprint() funtion

#define MAX_ASCII 128

int main(void)
{
    int c;
    int textCharFrequency[MAX_ASCII] = {0};

    while ((c = getchar()) != EOF)
    {
        if (isprint(c)) // only count printable characters
        {
            textCharFrequency[(int)c]++;
        }
    }

    printf("Character frequency horizontal histogram:\n");
    for (int i = 0; i < MAX_ASCII; i++)
    {
        if (textCharFrequency[i] != 0)
        {
            printf("%c: ", (char)i);
            for (int j = 0; j < textCharFrequency[i]; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}

/*
This is just a frequency test.
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
