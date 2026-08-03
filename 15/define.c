#include <stdio.h>

#define BIG_NUMBER 10000000
// define değiştirilebilir, her yerden heer yerden her yerden erşilebilir

int main()
{
    printf("%d", BIG_NUMBER);

    #undef BIG_NUMBER
    #define BIG_NUMBER 30000000

    printf("%d\n", BIG_NUMBER);

}