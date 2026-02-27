/*
Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
*/

#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) // EOF (End Of File) - no more input to read
    {
        // there will be 2 prints since we enter a character and then press ENTER (also a character)
        printf("c = %d, (c != EOF) = 1\n", c);
    }

    // EOF can be sent in a terminal by pressing Ctrl+D on an empty line (on Linux/macOS) or Ctrl+Z (on Win)
    printf("c = EOF, (c != EOF) = 0\n");

    return 0;
}

/* Output:
asd                         // user input followed by pressing ENTER
c = 97, (c != EOF) = 1
c = 115, (c != EOF) = 1
c = 100, (c != EOF) = 1
c = 10, (c != EOF) = 1      // 10 is the ASCII code for the newline character (ENTER)
xyz                         // user input followed by pressing ENTER
c = 120, (c != EOF) = 1
c = 121, (c != EOF) = 1
c = 122, (c != EOF) = 1
c = 10, (c != EOF) = 1
c = EOF, (c != EOF) = 0     // user sends EOF (Ctrl+D on Linux/macOS or Ctrl+Z on Windows)
*/
