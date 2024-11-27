#include <stdio.h>
int main() {
    int numero, pares = 0, impares = 0;
    printf("digite 10 números inteiros:\n");

    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    printf("quantidade de numeros pares: %d\n", pares);
    printf("quantidade de numeros ímpares: %d\n", impares);

    return 0;
}
