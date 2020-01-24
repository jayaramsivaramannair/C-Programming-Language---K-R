/*
* Write a program which prints its input one word per line.
*/

#include <stdio.h>
#define QUIT '%' // Quits the program when a '%' character is entered.

int main()
{
    int c;
    c = getchar();

    while (c != QUIT)
    {
        if (c == ' ' || c == '\t') // For every tab or space entered, a newline will be printed
        {
            putchar('\n');
        } else {
            putchar(c);
        }
        c = getchar();
    }

    return 0;
}