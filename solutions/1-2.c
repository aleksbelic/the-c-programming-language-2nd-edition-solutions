/*
Exercise 1-2. Experiment to find out what happens when prints's argument string contains
\c, where c is some character not listed above.
*/

#include <stdio.h>

int main(void)
{
    printf("hello, world\y\n"); // warning: unknown escape sequence: '\y'
    printf("hello, world\z\n"); // warning: unknown escape sequence: '\z'
    printf("hello, world\7\n"); // BELL (ASCII for decimal 7)
    printf("hello, world\a\n"); // also BELL
    printf("hello, world\h\n"); // warning: unknown escape sequence: '\h'
    return 0;
}

/*
hello, worldy
hello, worldz
hello, world
hello, world
hello, worldh
*/
