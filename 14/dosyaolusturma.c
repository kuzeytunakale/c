#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000

int main()
{
    char veri[VERI_BOYUTU];

    FILE * fptr;

    fptr = fopen("dosya1.txt", "w+"); // a+ dasha iyi

    if(fptr == NULL)
    {
        printf("Dosya oluşturulamadı\n");
        exit(EXIT_FAILURE);
    }

    printf("Dosyaya kaydedilecek olan girdiyi giriniz: \n");
    fgets(veri, VERI_BOYUTU, stdin);

    fputs(veri, fptr);

    fclose(fptr);
}