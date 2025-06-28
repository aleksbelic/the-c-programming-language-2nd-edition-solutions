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
    printf("F\tC\n----\t----\n");
    for (float fahrenheit = DEGREE_MIN; fahrenheit <= DEGREE_MAX; fahrenheit += STEP)
    {
        printf("%.1f\t%.1f\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));
    }

    printf("\n");

    printf("C\tF\n----\t----\n");
    for (float celsius = DEGREE_MIN; celsius <= DEGREE_MAX; celsius += STEP)
    {
        printf("%.1f\t%.1f\n", celsius, celsius_to_fahrenheit(celsius));
    }

    return 0;
}
