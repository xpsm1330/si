#include <stdio.h>

/* zlicz naki wejsciowe, ver.1*/
int main()
{
    long nc;
    nc = 0;
    while(getchar()!=EOF)
    {
        ++nc;
        printf("Ilość znaków: %ld\n", nc);
    }
}

/* 
long    32bit
%ld     wyświetlanie typu long
*/