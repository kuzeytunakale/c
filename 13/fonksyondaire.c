#include <stdio.h>
#include <math.h>  //M_PI sabitini kullanabilmek için math.h kütüphanesini ekledik

//fonksyon beyanları (deklarasyon)
float CemberCapiHesapla(float yaricap);
float CemberCevresiHesapla(float yaricap);
float CemberAlaniHesapla(float yaricap);

int main() 
{
    float yaricap, cap, cevre, alan;

    printf("Çemberin/Dairenin yarıçapını giriniz: ");
    scanf("%f", &yaricap);

    cap = CemberCapiHesapla(yaricap);
    cevre = CemberCevresiHesapla(yaricap);
    alan = CemberAlaniHesapla(yaricap);

    printf("Çemberin çapı = %f birim\n", cap);
    printf("Çemberin çevresi = %f birim\n", cevre);
    printf("Çemberin alanı = %f birimkare\n", alan);

     return 0;
}

float CemberCapiHesapla(float yaricap)
{
    return (2 * yaricap);
}

float CemberCevresiHesapla(float yaricap)
{
    return (2 * M_PI * yaricap);
}

float CemberAlaniHesapla(float yaricap)
{
    return (M_PI * yaricap * yaricap);
}