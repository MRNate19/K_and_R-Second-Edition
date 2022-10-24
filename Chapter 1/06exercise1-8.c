#include <stdio.h>

/* Exercise 1-8. Write a program to count blanks, tabs, and newlines */

main()
{
    int c, bl, t, nl;
    nl = 0;  // start count for newlines at 0
    bl = 0;  // start count for blanks at 0
    t = 0;   // start count for tabs at 0

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
            case ' ':
                ++bl;
                break;

            case '\t':
                ++t;
                break;
            
            case '\n':
                ++nl;
                break;
        }
    }

    printf("newlines: %d\ntabs: %d\nblanks: %d\n", nl, t, bl);
}