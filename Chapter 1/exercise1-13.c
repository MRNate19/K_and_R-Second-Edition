#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* Exercise 1-13. Write a program to print a histogram of the lengths of words in
   its input. */

/* I done a maximum of 10 words. I'm not sure if there is a way to make this more dynamic. */

int main()
{
    int state = OUT;
    int wc = 0;
    int i = 0;
    int c;

    int nwords[10];

    for (i = 0; i < 10; i++)
        nwords[i] = 0;

    /* while we are reading characters */
    while ((c = getchar()) != EOF)
    {
        /* if there is a space, newline or tab then we are outside a word */
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        /* count each word */
        else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
        /* only count characters if we are IN a word */
        if (state == IN)
            ++nwords[wc - 1];
    }

    /* print horizontal histogram of data */
    for (i = 0; i < wc; ++i)
    {
        printf("%d: ", i + 1);
        for (int j = 0; j < nwords[i]; j++)
        {
            printf("-");
        }
        printf("\n");
    }
}