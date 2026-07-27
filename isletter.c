#include <stdio.h>

int main() {
    char ch;

    printf("Lütfen bir karakter giriniz: ");
    scanf("%c", &ch);

    if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z'))) {
        printf("%c bir harf", ch);
    } else {
        printf("%c bir özel karakter", ch);
    }

return 0;

}