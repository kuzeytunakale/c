#include <stdio.h>

int main() {
    int myArray[10] = {25, 50, 75, 100};
    int index;

    for (index=0; index<4; index++) {
        printf("%d  |  ", myArray[index]);
    }
    

    return 0;

}