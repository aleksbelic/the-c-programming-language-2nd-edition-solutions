/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main(void)
{
    int c, blanksCount = 0, tabsCount = 0, newlinesCount = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            blanksCount++;
        else if (c == '\t')
            tabsCount++;
        else if (c == '\n')
            newlinesCount++;
    }

    printf("Blanks:\t\t%d\nTabs:\t\t%d\nNewlines:\t%d\n", blanksCount, tabsCount, newlinesCount);

    return 0;
}

/*
abc



Blanks:         2
Tabs:           1
Newlines:       4
*/