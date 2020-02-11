#include <stdio.h>

/* zlicz znaki odstępu, tabulacji i nowego wiersza */
int main()
{
    int c, nl=0, tab=0, space=0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
        }
        if (c == '\t')
        {
            ++tab;
        }
        if (c == ' ')
        {
            ++space;
        }
        printf("nLines:%d\ttabs:%d\tspaces:%d\n", nl, tab, space);
    }
    
}