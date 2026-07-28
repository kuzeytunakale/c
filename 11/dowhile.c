#include <stdio.h>

int main()
{
    int i, number;

    printf("Bir sayı giriniz: ");
    scanf("%d", &number);

    i = 1;
    do {
        printf("%d\n", i);
        i++;
    }while(i<=number);

    return 0;
}