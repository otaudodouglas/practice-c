#include <stdio.h>
int main() 
    int num1, num2, i, soma = 0;
    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    printf("numeros no intervalo entre %d e %d:\n", num1, num2);

    if (num1 < num2) {
        for (i = num1 + 1; i < num2; i++) {
            printf("%d ", i);
            soma += i;
        }
    } else if (num1 > num2) {
        for (i = num2 + 1; i < num1; i++) {
            printf("%d ", i);
            soma += i;
    } else {
        printf("nao há numeros entre %d e %d, pois sao iguais.\n", num1, num2);
    }
    if (soma > 0) {
        printf("\nsoma dos numeros no intervalo: %d\n", soma);
    }

    return 0;
}
