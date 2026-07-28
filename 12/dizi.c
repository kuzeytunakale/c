#include <stdio.h>

int main() {
    int myArray[] = {25, 50, 75, 100};
    myArray[0] = 32;

    printf("%d\n", myArray[4]);
    return 0;
}