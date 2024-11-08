#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("digite o segundo numero: ");
    scanf("%f", &num2);
    printf("digite o terceiro numero: ");
    scanf("%f", &num3);

    float maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }
    float menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    printf("o maior numero e: %.2f\n", maior);
    printf("o menor numero e: %.2f\n", menor);
    return 0;
}
