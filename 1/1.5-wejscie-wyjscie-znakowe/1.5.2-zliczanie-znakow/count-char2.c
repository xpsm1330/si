#include <stdio.h>

/* zlicz naki wejsciowe, ver.2 */
int main()
{
    double nc;

    for(nc=0; getchar()!=EOF; ++nc)
    {
        printf("Ilość znaków: %.0f\n", nc);
    }
}

/*
%f      dla typów float i double
%.0f    zapobiega wypisaniu kropki i cześci ułamkowej
*/