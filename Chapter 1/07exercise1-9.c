#include <stdio.h>

/* Exercise 1-9. Write a program to copy its input to its
    output, replacing each string of one or more blanks by a
    single blank */

main()
{
    int c, bl;
    bl = 0;  // we need to count blanks 

    while ((c = getchar()) != EOF)
    {
        // Increment bl for every blank
        if (c == ' ')
        {
            ++bl;
        }
        else
            bl = 0;

        if (bl <= 1)  // if spacebar has not been hit more than once
        {
            putchar(c);  // then copy text
        }
    }
}