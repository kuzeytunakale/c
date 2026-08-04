#include <stdio.h>
#include <stdlib.h>

void IsAllocNull(int *pointer);

int main() {
    int *pointer, i, n1, n2;
    printf("Please enter size: ");
    scanf("%d", &n1);

    pointer = (int*) malloc(n1 * sizeof(int));
    IsAllocNull(pointer);

    printf("Initially allocated memory adresses: \n");
    for(i = 0; i < n1; i++) {
        printf("%pc\n", pointer + i);
    }

    printf("Please enter the new size: ");
    scanf("%d", &n2);

    //yeniden bellek ayırma
    pointer = realloc(pointer, n2 * sizeof(int));
    IsAllocNull(pointer);

    printf("Newly allocated memory adresses: \n");
    for(i = 0; i < n1; i++) {
        printf("%pc\n", pointer + i);
    }

    free(pointer);

    return 0;
}

void IsAllocNull(int *pointer) {
    if (pointer == NULL) {
        printf("ERROR! Memory Allocation Failed.");
        exit(EXIT_FAILURE);
    }
}