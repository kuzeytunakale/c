#include <stdio.h>
#include <string.h>

int main() {
    int whichday;
    char day[11];

    printf("Günün haftanın kaçıncı günüolduğunu giriniz (1-7): ");
    scanf("%d", &whichday);

    switch(whichday) {
        case 1: 
            strcpy(day, "Pazartesi");
            break;
        case 2:
            strcpy(day, "Salı");
            break;
        case 3:
            strcpy(day, "Çarşamba");
            break;
        case 4:
            strcpy(day, "Perşembe");
            break;
        case 5:
            strcpy(day, "Cuma");
            break;
        case 6:
            strcpy(day, "Cumartesi");
            break;
        case 7:
            strcpy(day, "Pazar");
            break;
        default:
            strcpy(day, "Geçersiz");
            fprintf(stderr, "Hata: gün değeri geçersiz bir aralıkta\n");

            return 1;
    }

    printf("Seçtiğiniz gün : %s", day);

}
