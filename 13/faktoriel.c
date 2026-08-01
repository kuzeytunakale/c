#include <stdio.h>

int Faktoriel(int n);

int main()
{
    int i = 7;
    printf("%d", Faktoriel(i));
        
}

int Faktoriel(int n)
{
    int f;
    if(n==1) f=1;
    else f = n * Faktoriel(n-1);
    return f;
}

