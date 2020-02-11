#include <stdio.h>

/* zastąp tab na \t, cofanie na \b, a \ na \\ */
// int func(int znak)
// {
//     int tab[] = {0, znak};
//     for(int i=0; i<2; i++)
//     {

//     }
//     return znak;
// }

int main()
{
    double c;

    while ((c = getchar()) != EOF)
    {
        if (c == 9) //32 92
        {
            c = '\t';
        }
        putchar(c);
    }
}
// 92, t - 116, b - 98