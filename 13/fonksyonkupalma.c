#include <stdio.h>

//deklarasyon

int SayininKupunuHesapla(int sayi);

int main()
{
    int sayi, c;

    printf("Lütfen sayı giriniz: ");
    scanf("%d", &sayi);

    c = SayininKupunuHesapla(sayi);

    printf("%d sayısının küpü = %d", sayi, c);

    return 0;
}

int SayininKupunuHesapla(int sayi)
{
    return (sayi * sayi * sayi);
}