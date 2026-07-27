#include <stdio.h>

int main() {
    int i, top, sum = 0;

    printf("Üst sınırı giriniz: ");
    scanf("%d", &top);

    for (i=1; i<=top; i++) {
        sum += i;
    }

    printf("ilk %d adet sayma sayının toplamı = %d", top, sum);
}