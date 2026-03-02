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

/* Output example:
 asd    fgh         // user input: blank space followed by "asd", followed by tab, followed by "fgh", followed by ENTER
                    // user input: ENTER, followed by EOF (Ctrl+D on Linux/macOS or Ctrl+Z on Windows)
Blanks:         1
Tabs:           1
Newlines:       2
*/