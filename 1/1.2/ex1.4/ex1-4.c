#include <stdio.h>
/* wypisz zestawienie temperatur C-F
dla c=0, 20, 30, ..., 300*/
int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * (fahr + 32.0);
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}