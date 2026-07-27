#include <stdio.h>

int main() {
    int i, n;

    printf("Üst sınır değerini giriniz: ");
    scanf("%d", &n);

    printf("1'dem %d'ye kadar olan tüm tam sayılar:\n", n);

    for(i=1; i<=n; i++) {
        printf("%d\n", i);
    }
    for(i=n; i>=1; i--) {
        printf("%d\n", i);
    }

    return 0;
}