// rekurencja - funkcja wywołuje samą siebie
#include <stdio.h>

void func(int n)
{
    if(n>1)
    {
      func(n-1);  
    }
    printf("%d\n", n);
}

int main()
{
    int n = 5;
    func(n);
    return 0;
}