#include <stdio.h>
/* wypisz zestawienie temperatur F-C 
dla f=0, 20, 30, ..., 300*/
int main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper)
    {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
/*
char    znaj 1 bajt
short   liczba całkowita krótka
long    liczba całkowita długa
double  liczba zmiennopozycyjna podwójnej precyzjii
*/