#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool IsNumberArmstrong(int number);

int main() 
{
    int number;

    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &number);

    if (IsNumberArmstrong(number))
        printf("%d sayısı bir Armstrong sayısıdır.", number);
    else
        printf("%d sayısı bir armstrong sayısı degil.", number);
    
    return 0;
}


bool IsNumberArmstrong(int number)
{
    /*
        n basamaklı bir tam sayıda her bir basamağın rakamsal değerinin ayrı ayrı n sayısı üs olacak şekilde üssünün alınıp toplanmasıdır.

        Örnek: 153 => (1^3) + (5^3) + (3^3) = 1 + 125 + 27 = 153
        153 bir armstrong sayısıdır.
    */

    int sum, last_digit, numberofdigit, original_number;
    sum = 0;
    numberofdigit = (int) round(log10(number) + 1);
    original_number = number;

    while(number > 0)
    {
        last_digit = number % 10;
        sum += round(pow(last_digit, numberofdigit));
        number /= 10;
    }
    
    return (sum == original_number);
}