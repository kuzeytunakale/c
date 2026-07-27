#include <stdio.h>

int main()
{
    int i, number;

    printf("sayı: ");
    scanf("%d", &number);

    for(i=1; i<=number; i++)
    {
        if (number % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}