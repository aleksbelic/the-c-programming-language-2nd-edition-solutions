/*
Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
*/

#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;
    float celsius_min = 0, celsius_max = 300, step = 20;

    printf("C\tF\n----\t----\n");

    for (celsius = celsius_min; celsius <= celsius_max; celsius += step)
    {
        fahrenheit = celsius * 9.0 / 5.0 + 32;
        printf("%.1f\t%.1f\n", celsius, fahrenheit);
    }

    return 0;
}

/*
C       F
----    ----
0.0     32.0
20.0    68.0
40.0    104.0
60.0    140.0
80.0    176.0
100.0   212.0
120.0   248.0
140.0   284.0
160.0   320.0
180.0   356.0
200.0   392.0
220.0   428.0
240.0   464.0
260.0   500.0
280.0   536.0
300.0   572.0
*/