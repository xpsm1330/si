#include <stdio.h>

/* sprawdź czy wyrażenie getchar()!=EOF
może mieć wartośc 0 lub 1 */
int main()
{
    int c;
    c = getchar() != EOF;
    printf("%d\n", c);
    
    // while ((c = getchar()) != EOF)
    // {
    //     putchar(c);
    // }
}
