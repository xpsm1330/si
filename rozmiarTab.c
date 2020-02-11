#include <stdio.h>
#define A 5
#define B 4

int main()
{
    char tab [A][B] = {0};
    printf("%ld\n", sizeof(tab));

    return 0;
}