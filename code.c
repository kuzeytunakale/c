#include <stdio.h>
#include <string.h>

int main() {
    int length;
    char ilk, son;
    int h;

    scanf("%d", &length);
    
    char list[length][100];
    char list2[length][100];

    for(int i = 0; i < length; i++) {
        scanf("%s", list[i]);        
    }

    for(int i = 0; i < length; i++) {
        if (strlen(list[i]) > 10) {
            strcat()
        }
        else {
            strcpy(list2[i], list[i]);
        }
    }

}