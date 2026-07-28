#include <stdio.h>

int main() {
    int eklenecek_sayi, eklenecek_indeks;
    int myArray[] = {3,5,7,1,2,6,9};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    for(int index = 0; index < size; index++) {
        printf("%d, ", myArray[index]);
    }

    printf("\nPlease enter the number to add: ");
    scanf("%d", &eklenecek_sayi);
    printf("Please enter the index which the number will be added: ");
    scanf("%d", &eklenecek_indeks);

    for(int index = size + 1; index > eklenecek_indeks; index--) {
        myArray[index] = myArray[index - 1];       
    }

    myArray[eklenecek_indeks] = eklenecek_sayi;

    for(int index = 0; index < size; index++) {
        printf("%d, ", myArray[index]);
    }

    return 0;
}