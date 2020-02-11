#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void func_var(int zmienna)
{
    zmienna = 4;
}
void func_pointer(int *zmienna) // do funkcji oczekującej wskaźnika, 
                                // przekazać adres zmiennej &z
{
    (*zmienna) = 5;
}
void swap (int *px, int *py)
{
    int temp=0;
        printf("step 0, temp=%d, px=%d, py=%d\n", temp, *px, *py);
    temp = *px;
        printf("step 1, temp=%d, px=%d, py=%d\n", temp, *px, *py);
    *px = *py;
        printf("step 2, temp=%d, px=%d, py=%d\n", temp, *px, *py);
    *py = temp;
        printf("step 3, temp=%d, px=%d, py=%d\n", temp, *px, *py);
    printf("zmienne po swapie px:%d py:%d\n", *px, *py);
}

int main(void)
{
    int z = 3;
    int *ptr;
    ptr = &z;

    printf("wartość zmiennej: %d\n", *ptr); // wyłuskanie - dereferencja wskaźnika; podjęcie wartości zmiennej
    printf("adres zmiennej: %p || %p\n", &z, ptr);
    printf("adres wskaźnika: %p\n\n", &ptr);
        
    printf("z= %d\n", z);

    func_var(z); // zmienna
    printf("z= %d\n", z);

    func_pointer(&z); // adres zmiennej
    printf("z= %d\n", z);

    // =====
    int tab[] = {10, 20, 30, 40, 50};
    int *arr;

    for (int i = 0; i < sizeof(tab) / sizeof(tab[0]); i++)
    {
        printf("wartość po indeksie: %d\n", tab[i]); // wartość po indeksie
        arr = &tab[i];
        printf("wartość po wskaźniku: %d\n", *arr); // wartość po wskaźniku
        printf("adres elementu: %p\n", &arr[i]);
    }
    printf("\nadres tablicy: %p\n", &arr);

    void free(void *arr);
    arr = 0; // po zwonieniu pamięci, przypisać do wskaźnoka wartość 0
    
    // ===
    int rozmiar;
    float *tablica;
    rozmiar =3;
    tablica = (float*) malloc(rozmiar * sizeof(*tablica));
    //pierwsza gwiazdka (*) w funkcji malloc() to operator mnozenia
    tablica[0] = 0.1;

    // zmiana rozmiaru przydzielonej pamięci
    tablica = realloc(tablica, 2 * rozmiar * sizeof(*tablica));

    // calloc, w odróżnieniu od malloc - zeruje przydzieloną pamięć

    int size;
    float *table;

    rozmiar = 3;
    table = (float *)calloc(size, sizeof(*table));
    table[0] = 0.1;

    char str[100];
    int i;

    printf("Enter a value :");
    scanf("%s", str);
    printf("\nYou entered: %s \n", str);

    char pattern[] = "nie";
    printf("il.BIT\tDł.\n");
    printf("%ld\t", sizeof(pattern));
    printf("%ld\n", strlen(pattern));

    for(int d=0; d<=sizeof(pattern); d++)
    {
        printf("%c\t", pattern[d]);
        printf("%d\n", pattern[d]);
    }

    int x=1, y=2, za[10]={0};
    int *ip; // inicjalizacja wsk
    ip = &x; // przypisanie adresu
    printf("===\n%d\n", *ip); // wskazuje na x=1
    y = *ip; // przypisz wartość x do y
    printf("%d\n", y); // y = 1
    *ip = *ip + 1; // dodanie 10 do x
    /* elternatywnie
    *ip += 1;   lub   ++*ip;    lub     (*ip)++;
    */
    printf("%d\n", *ip); // x=2
    ip = &za[2]; // wskazanie na adres 3el w tablicy
    printf("%d\n", *ip);

    // przykład swapa na zmiennych
    int px = 3, py = 4;
    printf("zmiennie przed swapem, px:%d py:%d\n", px, py);
    swap(&px, &py);


    printf("\n");
    return 0;
}


// int i;         /* zmienna całkowita (typu int) 'i' */
// int *p;         /* wskaźnik 'p' wskazujący na zmienną całkowitą */
// int a[];        /* tablica 'a' liczb całkowitych typu int */
// int f();        /* funkcja 'f' zwracająca liczbę całkowitą typu int */
// int **pp;       /* wskaźnik 'pp' wskazujący na wskaźnik wskazujący na liczbę całkowitą typu int */
// int (*pa)[];    /* wskaźnik 'pa' wskazujący na tablicę liczb całkowitych typu int */
// int (*pf)();    /* wskaźnik 'pf' wskazujący na funkcję zwracającą liczbę całkowitą typu int */
// int *ap[];      /* tablica 'ap' wskaźników na liczby całkowite typu int */
// int *fp();      /* funkcja 'fp', która zwraca wskaźnik na zmienną typu int */
// int ***ppp;     /* wskaźnik 'ppp' wskazujący na wskaźnik wskazujący na wskaźnik wskazujący na liczbę  typu int */
// int (**ppa)[];  /* wskaźnik 'ppa' wskazujący na wskaźnik wskazujący na tablicę liczb całkowitych typu int */
// int (**ppf)();  /* wskaźnik 'ppf' wskazujący na wskaźnik funkcji zwracającej dane typu int */
// int *(*pap)[];  /* wskaźnik 'pap' wskazujący na tablicę wskaźników na typ int */
// int *(*pfp)();  /* wskaźnik 'pfp' na funkcję zwracającą wskaźnik na typ int*/
// int **app[];    /* tablica wskaźników 'app' wskazujących na wskaźniki wskazujące na typ int */
// int (*apa[])[]; /* tablica wskaźników 'apa' wskazujących na tablicę liczb całkowitych typu int */
// int (*apf[])(); /* tablica wskaźników 'apf' na funkcje, które zwracają typ int */
// int **fpp();    /* funkcja 'fpp', która zwraca wskaźnik na wskaźnik, który wskazuje typ int */
// int (*fpa())[]; /* funkcja 'fpa', która zwraca wskaźnik na tablicę liczb typu int */
// int (*fpf())(); /* funkcja 'fpf', która zwraca wskaźnik na funkcję, która zwraca dane typu int */
