/*
Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Ranges using standard headers:\n");
    printf("CHAR:\n");
    printf(" * signed: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf(" * unsigned: 0 to %d\n", UCHAR_MAX);
    printf("SHORT:\n");
    printf(" * signed: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf(" * unsigned: 0 to %d\n", USHRT_MAX);
    printf("INT:\n");
    printf(" * signed: %d to %d\n", INT_MIN, INT_MAX);
    printf(" * unsigned: 0 to %u\n", UINT_MAX);
    printf("LONG:\n");
    printf(" * signed: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf(" * unsigned: 0 to %lu\n", ULONG_MAX);

    printf("--------------------------------\n");

    printf("Ranges using direct computation:\n");

    // ~0 gives all bits set to 1, so we can use it to compute the max values for unsigned types
    unsigned char unsigned_char_max = (unsigned char)~0;
    unsigned short unsigned_short_max = (unsigned short)~0;
    unsigned int unsigned_int_max = ~0U;
    unsigned long unsigned_long_max = ~0UL;

    printf("CHAR:\n");
    printf(" * signed: %d to %d\n",
           -(int)(unsigned_char_max >> 1) - 1,
           (int)(unsigned_char_max >> 1));
    printf(" * unsigned: 0 to %u\n", unsigned_char_max);

    printf("SHORT:\n");
    printf(" * signed: %d to %d\n",
           -(int)(unsigned_short_max >> 1) - 1,
           (int)(unsigned_short_max >> 1));
    printf(" * unsigned: 0 to %u\n", unsigned_short_max);

    printf("INT:\n");
    printf(" * signed: %d to %d\n",
           -(int)(unsigned_int_max >> 1) - 1,
           (int)(unsigned_int_max >> 1));
    printf(" * unsigned: 0 to %u\n", unsigned_int_max);

    printf("LONG:\n");
    printf(" * signed: %ld to %ld\n",
           -(long)(unsigned_long_max >> 1) - 1,
           (long)(unsigned_long_max >> 1));
    printf(" * unsigned: 0 to %lu\n", unsigned_long_max);

    return 0;
}

/* Output de pends on the system, but typically would be:
Ranges using standard headers:
CHAR:
 * signed: -128 to 127
 * unsigned: 0 to 255
SHORT:
 * signed: -32768 to 32767
 * unsigned: 0 to 65535
INT:
 * signed: -2147483648 to 2147483647
 * unsigned: 0 to 4294967295
LONG:
 * signed: -9223372036854775808 to 9223372036854775807
 * unsigned: 0 to 18446744073709551615
--------------------------------
Ranges using direct computation:
CHAR:
 * signed: -128 to 127
 * unsigned: 0 to 255
SHORT:
 * signed: -32768 to 32767
 * unsigned: 0 to 65535
INT:
 * signed: -2147483648 to 2147483647
 * unsigned: 0 to 4294967295
LONG:
 * signed: -9223372036854775808 to 9223372036854775807
 * unsigned: 0 to 18446744073709551615
*/