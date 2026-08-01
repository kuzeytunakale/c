#include <stdio.h>
#include <stdbool.h>

bool IsNumberPerfect(int number);

int main()
{
    int number;

    printf("Bir sayı giriniz:");
    scanf("%d", &number);

    if (IsNumberPerfect(number)) {
        printf("%d sayısı mükemmel sayıdır", number);
    }
    else {
        printf("%d sayısı mükemmel sayı değil", number);
    }
    }


bool IsNumberPerfect(int number)
{
    /*
        kendizi hariç pozitif bölenlerinin toplamı kendisine
        eşit olan sayılar mükemmel sayıdır.

        örnek: 6 => 1 + 2 + 3 = 6
        6 sayısı bir mükemmel sayıdır
    */
    int sum;
    sum = 0;

    for(int i=1; i<number; i++)
    {
        if ((number % i) == 0) {
         sum += i;
        }
    }

    return (sum == number);
}