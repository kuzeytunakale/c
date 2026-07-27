#include <stdio.h>

int main()  {
    float number1, number2, result = 0.0f;
    
    char operation;

    printf("BASİT HESAP MAKİNESİ UYGULAMASI\n");
    printf("-------------------------------\n");

    takeopeartion: //label for looping back
    
    printf("Lütfen [1. sayı] [+ - * /] [2. sayi] şeklinde işleminizi giriniz: ");
    scanf("%f %c %f", &number1, &operation, &number2);

    switch (operation)  {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1 / number2;
            break;
        default:
            printf("!!Girdiğiniz işlem geçersiz, lütfen geçerli bir işlem giriniz!!\n");
            goto takeopeartion;
    }
    printf("%.2f %c %.2f = %.2f\n", number1, operation, number2, result);

    return 0;

}