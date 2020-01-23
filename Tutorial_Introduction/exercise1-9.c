/*
* Write a program to copy input to the output
* replacing each string of one or more blanks by a single blank
*/

#include <stdio.h>
#define QUIT '%' // Quits the program when a '%' character is entered.

int main()
{
    int multiple_space = 0;
    int c;

    while (c != QUIT)
    {
        c = getchar();
        if (c == ' ' || c == '\t') // Checks if the character is a blank space
        {
            if (!multiple_space) // Will be evaluated when multiple_space equals zero
            {
                putchar(' '); // In case of multiple blank space, only one blank space will be entered.
                multiple_space++;
            }
        } else {
            putchar(c); // Any characters other than blank spaces are printed as they are
            if(multiple_space)
                multiple_space = 0;
        }
    }

    return 0;
}