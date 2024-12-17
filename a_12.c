#include <stdio.h>
#include <stdbool.h>
int main() {
    int limite, i, j;
    printf("digite um número inteiro positivo: ");
    scanf("%d", &limite);

    if (limite < 2) {
        printf("nao a numeros primos no intervalo de 1 a %d.\n", limite);
        return 0;
    }

    printf("numeros primos entre 1 e %d:\n", limite);

    for (i = 2; i <= limite; i++) {
        bool ehPrimo = true;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                ehPrimo = false;
            }
        }

        if (ehPrimo) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
