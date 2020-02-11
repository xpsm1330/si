#include <stdio.h>
/* wypisz zestawienie temperatur F-C 
dla f=0, 20, 30, ..., 300*/
int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
/*
%3.0    3 znaki, bez kropki i ułamka
%6.1    6 znaków i 1 cyfra po kropce
%d      liczba dziesiętna
%f      liczba zmiennopozycyjna
%6.2f   liczba zmiennopozycyjna z 2 miejscami po kropce
        zajmująca conajmniej 6 znaków
%o      format ósemkowy
%x      format szestnastkowy
%c      jeden znak
%s      ciąg znaków
%%      wypisanie znaku %
*/