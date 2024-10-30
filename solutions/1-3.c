#include <stdio.h>

int main(void)
{
    float fahrenheit, celsius;
    float fahrenheitMin = 0, fahrenheitMax = 300, step = 20;

    printf("F\tC\n----\t----\n");

    for (fahrenheit = fahrenheitMin; fahrenheit <= fahrenheitMax; fahrenheit += step)
    {
        celsius = 5.0 / 9.0 * (fahrenheit - 32);
        printf("%.1f\t%.1f\n", fahrenheit, celsius);
    }

    return 0;
}