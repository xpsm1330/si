#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20
/* wypisz zestawienie temperatur F-C 
dla f=0, 20, 30, ..., 300*/
int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3.0d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}