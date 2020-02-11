#include <stdio.h>

/* przepisz wejście na wyjście, ver.1 */
int main()
{
    int c;

    c=getchar();
    while(c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
/*
EOF     end of file
*/