#include <stdio.h>
/* wypisz zestawienie temperatur F-C 
dla f=300 -> 0*/
int main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr-20)
    {
        printf("%3.0d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}