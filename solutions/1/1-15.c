/*
Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion.
*/

#include <stdio.h>

#define DEGREE_MIN 0.0f
#define DEGREE_MAX 300.0f
#define STEP 20.0f

float fahrenheit_to_celsius(float fahrenheit)
{
    return 5.0 / 9.0 * (fahrenheit - 32);
}

float celsius_to_fahrenheit(float celsius)
{
    return celsius * 9.0 / 5.0 + 32;
}

int main(void)
{
    printf("%5s\t%6s\n-----\t------\n", "F", "C");
    for (float fahrenheit = DEGREE_MIN; fahrenheit <= DEGREE_MAX; fahrenheit += STEP)
    {
        printf("%3.1f\t%6.2f\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));
    }

    printf("\n");

    printf("%5s\t%6s\n-----\t------\n", "C", "F");
    for (float celsius = DEGREE_MIN; celsius <= DEGREE_MAX; celsius += STEP)
    {
        printf("%3.1f\t%6.2f\n", celsius, celsius_to_fahrenheit(celsius));
    }

    return 0;
}

/* Output example:
    F        C
-----   ------
0.0     -17.78
20.0     -6.67
40.0      4.44
60.0     15.56
80.0     26.67
100.0    37.78
120.0    48.89
140.0    60.00
160.0    71.11
180.0    82.22
200.0    93.33
220.0   104.44
240.0   115.56
260.0   126.67
280.0   137.78
300.0   148.89

    C        F
-----   ------
0.0      32.00
20.0     68.00
40.0    104.00
60.0    140.00
80.0    176.00
100.0   212.00
120.0   248.00
140.0   284.00
160.0   320.00
180.0   356.00
200.0   392.00
220.0   428.00
240.0   464.00
260.0   500.00
280.0   536.00
300.0   572.00
*/