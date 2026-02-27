/*
Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
*/

#include <stdio.h>

int main(void)
{
    float fahrenheit, celsius, fahrenheit_min = 0, fahrenheit_max = 300, step = 20;

    printf("%5s\t%5s\n-----\t-----\n", "F", "C");

    for (fahrenheit = fahrenheit_min; fahrenheit <= fahrenheit_max; fahrenheit += step)
    {
        celsius = 5.0 / 9.0 * (fahrenheit - 32);
        printf("%5.1f\t%5.1f\n", fahrenheit, celsius);
    }

    return 0;
}

/* Output:
    F       C
-----   -----
  0.0   -17.8
 20.0    -6.7
 40.0     4.4
 60.0    15.6
 80.0    26.7
100.0    37.8
120.0    48.9
140.0    60.0
160.0    71.1
180.0    82.2
200.0    93.3
220.0   104.4
240.0   115.6
260.0   126.7
280.0   137.8
300.0   148.9
*/