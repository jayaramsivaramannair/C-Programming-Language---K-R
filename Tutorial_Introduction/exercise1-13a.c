/*
* Write a program to print a histogram of the lengths of words in its input
* Then draw a histogram with horizontal bars
*/

#include <stdio.h>

int main()
{
    int c;
    int word_count = 7; // Number of words to be read at one time.


    while (word_count > 0)
    {
        c = getchar();
        if (c == '\n' || c == ' ' || c == '\t')
        {
            putchar('\n');
            word_count--;
        } else {
            putchar('&');
        }
    }
}