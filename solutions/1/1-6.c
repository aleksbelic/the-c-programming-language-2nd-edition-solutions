/*
Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
*/

#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        // there will be 2 prints since we enter a character and then press Enter (also a character)
        printf("c = %d, (c != EOF) = 1\n", c);
    }

    // EOF can be sent in a terminal by pressing Ctrl+D on an empty line (on Linux/macOS) or Ctrl+Z (on Win)
    printf("c = EOF, (c != EOF) = 0\n");

    return 0;
}

/*
y
c = 121, (c != EOF) = 1
c = 10, (c != EOF) = 1
A
c = 65, (c != EOF) = 1
c = 10, (c != EOF) = 1
c = EOF, (c != EOF) = 0
*/
