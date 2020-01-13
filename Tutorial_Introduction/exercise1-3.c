#include <stdio.h>


/* print Fahrenheit - Celsius Table */

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    fahr = lower;
    step = 20;

    printf("Fahrenheit     Celsius\n");
    printf("==========     =======\n");

    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%5.0f    %12.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}