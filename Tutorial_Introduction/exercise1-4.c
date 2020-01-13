#include <stdio.h>


/* print Celsius - Fahrenheit Table */

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 150;
    celsius = lower;
    step = 10;

    printf("Celsius     Fahrenheit\n");
    printf("=======     ==========\n");

    while (celsius <= upper)
    {
        fahr = (9.0/5.0 * celsius) + 32.0;
        printf("%5.0f    %10.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}