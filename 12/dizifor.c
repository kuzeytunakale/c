#include <stdio.h>

int main() {
    int myArray[] = {25, 50, 75, 100};
    int i;

    for (i=0; i<4; i++) {
        printf("%d  |  ", myArray[i]);
    }

    return 0;

}