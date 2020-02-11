#include <stdio.h>

/* zastąp kilka spacji 1 spacją */
int main()
{
    int c, space = 0;

    while ((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            ++space; 
        }
        if (space > 1)
        {
            c = '\b';
            space = 0;
        }
        putchar(c);
    }
}