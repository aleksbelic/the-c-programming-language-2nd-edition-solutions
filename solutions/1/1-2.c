/*
Exercise 1-2. Experiment to find out what happens when prints's argument string contains
\c, where c is some character not listed above.
*/

#include <stdio.h>

int main(void)
{
    /* escape sequences in C:
    newline NL (LF) = \n
    backslash \ = \\
    horizontal tab HT = \t
    question mark ? = \?
    vertical tab VT = \v
    single quote ' = \'
    backspace BS = \b
    double quote " = \"
    carriage return CR = \r
    octal number ooo = \ooo
    formfeed FF = \f
    hex number hh = \xhh
    audible alert BELL \a

    If the character after the backslash is not a valid escape sequence,
    the backslash is ignored and the character is printed as is.
    */
    printf("hello, world\y\n");   // warning: unknown escape sequence: '\y'
    printf("hello, world\z\n");   // warning: unknown escape sequence: '\z'
    printf("hello, world\a\n");   // BELL
    printf("hello, world\101\n"); // ASCII octal 101 == 'A'
    printf("hello, world\h\n");   // warning: unknown escape sequence: '\h'
    return 0;
}

/* Output example:
hello, worldy
hello, worldz
hello, world
hello, world
hello, worldA
hello, worldh
*/
