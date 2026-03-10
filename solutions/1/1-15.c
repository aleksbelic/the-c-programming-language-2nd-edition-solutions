/*
Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion.
*/

#include <stdio.h>

#define DEGREE_MIN 0.0f
#define DEGREE_MAX 300.0f
#define STEP 20.0f

float fahrenheit_to_celsius(float fahrenheit);
float celsius_to_fahrenheit(float celsius);

int main(void)
{
    printf("%5s\t%6s\n-----\t------\n", "F", "C");
    for (float fahrenheit = DEGREE_MIN; fahrenheit <= DEGREE_MAX; fahrenheit += STEP)
    {
        printf("%6.2f\t%6.2f\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));
    }

    putchar('\n');

    printf("%5s\t%6s\n-----\t------\n", "C", "F");
    for (float celsius = DEGREE_MIN; celsius <= DEGREE_MAX; celsius += STEP)
    {
        printf("%6.2f\t%6.2f\n", celsius, celsius_to_fahrenheit(celsius));
    }

    return 0;
}

float fahrenheit_to_celsius(float fahrenheit)
{
    return 5.0 / 9.0 * (fahrenheit - 32);
}

float celsius_to_fahrenheit(float celsius)
{
    return celsius * 9.0 / 5.0 + 32;
}

/* Output example:
    F        C
-----   ------
  0.00  -17.78
 20.00   -6.67
 40.00    4.44
 60.00   15.56
 80.00   26.67
100.00   37.78
120.00   48.89
140.00   60.00
160.00   71.11
180.00   82.22
200.00   93.33
220.00  104.44
240.00  115.56
260.00  126.67
280.00  137.78
300.00  148.89

    C        F
-----   ------
  0.00   32.00
 20.00   68.00
 40.00  104.00
 60.00  140.00
 80.00  176.00
100.00  212.00
120.00  248.00
140.00  284.00
160.00  320.00
180.00  356.00
200.00  392.00
220.00  428.00
240.00  464.00
260.00  500.00
280.00  536.00
300.00  572.00
*/