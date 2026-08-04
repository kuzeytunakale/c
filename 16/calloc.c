#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *pointer, sum = 0;

    printf("Please enter the number of elements to be added: ");
    scanf("%d", &n);

    pointer = (int*) calloc(n, sizeof(int));

    if(pointer == NULL) {
        printf("ERROR! Memory allocation failed.");
        exit(EXIT_FAILURE);
    }

    printf("Please enter numbers to be added: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", pointer + i);
        sum += *(pointer + i);
    }
    printf("Sum of the numbers: %d\n", sum);

    free(pointer);

    return 0;
}