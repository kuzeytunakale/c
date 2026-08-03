#include <stdio.h>
// const asla değiştirilemez asla, sadece kendi fonksyonunda kullanılabilir
int main() 
{
    const int MINUTES_PER_HOUR = 61;
    const double PI = 3.14159265;

    printf("%d\n", MINUTES_PER_HOUR);
    printf("%.8lf\n", PI);

    return 0;
}