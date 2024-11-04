#include <stdio.h>

int main() {
    int numero1, numero2;
    float numero3;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    printf("Digite  o número real: ");
    scanf("%f", &numero3);
    
    float resultadoA = (2 * numero1) * (numero2 / 2.0);
    float resultadoB = (3 * numero1) + numero3;
    float resultadoC = numero3 * numero3 * numero3;

    printf("A. O produto do dobro do primeiro com metade do segundo é: %.2f\n", resultadoA);
    printf("B. A soma do triplo do primeiro com o terceiro é: %.2f\n", resultadoB);
    printf("C. O terceiro elevado ao cubo é: %.2f\n", resultadoC);

    return 0;
}