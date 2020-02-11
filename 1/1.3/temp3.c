#include <stdio.h>
/* wypisz zestawienie temperatur F-C 
dla f=0, 20, 30, ..., 300*/
int main()
{
    int fahr;

    for(fahr=0; fahr<=300; fahr=fahr+20)
    {
        printf("%3.0d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}