/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main(void)
{
    int c, blanks_count = 0, tabs_count = 0, newlines_count = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            blanks_count++;
        else if (c == '\t')
            tabs_count++;
        else if (c == '\n')
            newlines_count++;
    }

    printf("Blanks:\t\t%d\nTabs:\t\t%d\nNewlines:\t%d\n", blanks_count, tabs_count, newlines_count);

    return 0;
}

/*
abc



Blanks:         2
Tabs:           1
Newlines:       4
*/