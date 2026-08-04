#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *pointer, sum = 0;

    printf("Please enter the number of elements to be added");
    scanf("%d", &n);

    pointer = (int*) malloc(n * sizeof(int));

    // bunu hep yazzzzzzzzz!!!!!!!!!!!!
    if(pointer == NULL) {
        printf("ERROR! Memory allocation failed. ");
        exit(0);
    }

    printf("Please enter the numbers to be added: ");
    for(i=0; i < n; i++) {
        scanf("%d", pointer + i);
        sum += *(pointer + i);
    }

    printf("Total = %d", sum);

    free(pointer);

    return 0;
}