#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int sayi);

int main()
{
    int sayi;

    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);

    if (IsPrime(sayi))
        printf("%d bir asal sayı\n", sayi);
    else
        printf("%d bir asal sayı değil\n", sayi);

    return 0;
}

bool IsPrime(int sayi)
{
    if (sayi <= 1)
        return false;
    // i * i <= sayı ==== i <= sqrt(sayi) bunlar aynı 
    for(int i=2; i * i <= sayi; i++)
    {
        if ((sayi % i) == 0)
            return false;
        
    }
    return true;
}