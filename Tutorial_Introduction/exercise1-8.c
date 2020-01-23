/*
* Write a program to count blanks, tabs and newlines
*/

#include <stdio.h>
#define QUIT '%' // Quits the program when a '%' character is entered.

int main()
{
    long empty_chars = 0; // Keeps track of every blank, tabs and newlines
    int c;

    while (c != QUIT)
    {
        c = getchar();
        if (c == ' ' || c == '\t' || c == '\n')
            empty_chars++;
    }
    printf("%ld\n", empty_chars);
    return 0;
}