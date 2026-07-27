#include <stdio.h>
#include <string.h>

int main() {
    int whichday;
    char day[11];

    printf("Lütfen haftanın kaçıncı günü olduğunu giriniz: [1 - 7] ");
    scanf("%d", &whichday);

    if (whichday == 1) {
        strcpy(day, "Pazartesi");
    }
    else if (whichday == 2) {
        strcpy(day, "Salı");
    }
    else if (whichday == 3) {
        strcpy(day, "Çarşamba");
    }
    else if (whichday == 4) {
        strcpy(day, "Perşembe");
    }
    else if (whichday == 5) {
        strcpy(day, "Cuma");
    }
    else if (whichday == 6) {
        strcpy(day, "Cumartesi");
    }
    else if (whichday == 7) {
        strcpy(day, "Pazar");
    }
    else {
        strcpy(day, "Geçersiz");
        fprintf(stderr, "Hata: gün değeri geçersiz bir aralıkta\n");

        return 1;
    }

    printf("Seçtiğiniz gün %s", day);
    

}