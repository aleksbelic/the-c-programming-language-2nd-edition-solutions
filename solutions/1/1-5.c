/*
Exercise 1-5. Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0.
*/

#include <stdio.h>

int main(void)
{
    float fahrenheit, celsius;
    float fahrenheit_min = 0, fahrenheit_max = 300, step = 20;

    printf("F\tC\n----\t----\n");

    for (fahrenheit = fahrenheit_max; fahrenheit >= fahrenheit_min; fahrenheit -= step)
    {
        celsius = 5.0 / 9.0 * (fahrenheit - 32);
        printf("%.1f\t%.1f\n", fahrenheit, celsius);
    }

    return 0;
}

/*
F       C
----    ----
300.0   148.9
280.0   137.8
260.0   126.7
240.0   115.6
220.0   104.4
200.0   93.3
180.0   82.2
160.0   71.1
140.0   60.0
120.0   48.9
100.0   37.8
80.0    26.7
60.0    15.6
40.0    4.4
20.0    -6.7
0.0     -17.8
*/