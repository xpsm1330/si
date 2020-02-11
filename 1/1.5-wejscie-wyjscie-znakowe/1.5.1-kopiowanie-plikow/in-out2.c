#include <stdio.h>

/* przepisz wejście na wyjście, ver.2 */
int main()
{
    int c;

    while ((c=getchar()) != EOF)
    {
        putchar(c);
    }
}
/*
pętla while otrzymuje znak, przypisuje go do zmiennej c
i sprawdza czy to co otrzymała nie jest sygnałem końca pliku

priorytet operatora relacji != jest wyższy 
niż priorytet operatora przypisania =
*/