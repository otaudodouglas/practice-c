#include <stdio.h>

int main() {
    int numero, i;

    // solicita o numero ao ususrio
    printf("Digite um número entre 1 e 10 para ver sua tabuada: ");
    scanf("%d", &numero);

    // berifica se o número está no intervalo valido
    if (numero < 1 || numero > 10) {
        printf("Por favor, insira um número entre 1 e 10.\n");
    }
    printf("tabuada de %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
