#include <stdio.h>

int main() {
    int myArray[] = {4, 6, 1, 7, 3, 9, 5};
    int max = myArray[0];
    int location = 0;

    int size = sizeof(myArray) / sizeof(myArray[0]);

    for(int index=0; index < size; index++) {
        if (myArray[index] > max) {
            max = myArray[index];
            location = index;
        }
    }

    printf("en büyük eleman = %d | konumu = %d | dizinin boyutu = %d\n", max, location, size);

    return 0;

}