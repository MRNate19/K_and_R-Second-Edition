#include <stdio.h>

#define IN 1     /* inside a word */
#define OUT 0    /* outside a word */

/* Exercise 1-12. Write a program that prints its input one word per line */

int main()
{
    int c;
    int state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            state = IN;
            putchar(c);
        }
        else if (state == IN && c != '\n')
        {
            state = OUT;
            c = '\n';
            putchar(c);
        }
    }
}