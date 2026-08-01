#include <stdio.h>
#include <stdbool.h>

bool IsEven(int sayi)
{
    return ((sayi % 2) == 0);
}

int main()
{
    int sayi;
    scanf("%d", &sayi);

    if (IsEven(sayi))
        printf("bu sayı çift");
    else
        printf("Bu sayı tek");

    return 0;
}