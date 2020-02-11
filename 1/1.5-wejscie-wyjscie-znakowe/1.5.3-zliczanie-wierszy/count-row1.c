#include <stdio.h>

/* zlicz wiersze wejściowe */
int main()
{
    int c, nl;

    nl=0;
    while((c=getchar())!=EOF)
    {
        if(c=='\n')
        {
            ++nl;
        }
        printf("Ilość wierszy: %d", nl);
    }
    
}
/*
\n     wartość 10 w ASCI
*/