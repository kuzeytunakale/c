#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPtr;
     char karakter;

     fPtr = fopen("dosya1.txt", "r");

     if(fPtr == NULL)
     {
        printf("Dosya okunamadı");
        exit(EXIT_FAILURE);
     }

     do
     {
        karakter = fgetc(fPtr);

        putchar(karakter);

     } while (karakter != EOF);
     
     fclose(fPtr);


}