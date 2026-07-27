#include <stdio.h>
#include <string.h>

int main() {
    int whichday;
    char day[11];

    printf("Günün haftanın kaçıncı günüolduğunu giriniz (1-7): ");
    scanf("%d", &whichday);

    switch(whichday) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            strcpy(day, "Hafta içi");
            break;
        case 6:
        case 7:
            strcpy(day, "Hafta sonu");
            break;
        default:
            strcpy(day, "Geçersiz");
            fprintf(stderr, "Hata: gün değeri geçersiz bir aralıkta\n");

            return 1;
    }

    printf("Seçtiğiniz gün : %s", day);

}
