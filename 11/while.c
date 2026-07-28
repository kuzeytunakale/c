#include <stdio.h>

int main()
{
    int number, i;

    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &number);

    i=1;
    while(i<=number)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}