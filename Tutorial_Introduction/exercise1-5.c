#include <stdio.h>


/* print Fahrenheit - Celsius Table */

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    fahr = upper;
    step = 20;

    printf("Fahrenheit     Celsius\n");
    printf("==========     =======\n");

    while (fahr >= lower)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%8.0f    %8.1f\n", fahr, celsius);
        fahr = fahr - step;
    }

    return 0;
}