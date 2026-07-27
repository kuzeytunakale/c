#include <stdio.h>

int main() {
    int i, top;

    printf("üst ınırı giriniz: ");
    scanf("%d", &top);

    for(i=1; i<=top; i++) 
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}