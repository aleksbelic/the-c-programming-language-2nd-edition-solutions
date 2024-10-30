#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;
    float celsiusMin = 0, celsiusMax = 300, step = 20;

    printf("C\tF\n----\t----\n");

    for (celsius = celsiusMin; celsius <= celsiusMax; celsius += step)
    {
        fahrenheit = celsius * 9.0 / 5.0 + 32;
        printf("%.1f\t%.1f\n", celsius, fahrenheit);
    }

    return 0;
}