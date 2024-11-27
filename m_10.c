#include <stdio.h>
int main() {
    int numero, i;
    printf("digite um numero entre 1 e 10 para ver sua tabuada: ");
    scanf("%d", &numero);

    while (numero < 1 || numero > 10) {
        printf("insira um número entre 1 e 10: ");
        scanf("%d", &numero);
    }
    printf("tabuada de %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", numero, i, numero * i);
    }
    return 0;
}
