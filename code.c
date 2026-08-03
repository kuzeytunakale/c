#include <stdio.h>
#include <string.h>

int main() {
    int length;

    scanf("%d", &length);
    
    char list[length][101];
    char list2[length][101];
  
    for(int i = 0; i < length; i++) {
        scanf("%s", list[i]);        
    }

    for(int i = 0; i < length; i++) {
        
        if (strlen(list[i]) > 10) {
            int len = strlen(list[i]);
            sprintf(list2[i], "%c%d%c", list[i][0], len - 2, list[i][len - 1]);
        }
        else {
            strcpy(list2[i], list[i]);
        }
    }

    for(int i=0; i < length; i++) {
        printf("%s\n", list2[i]);
    }

    return 0;
}