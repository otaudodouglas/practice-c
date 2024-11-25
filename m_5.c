#include <stdio.h>
int main() {
    int contador = 0;
    float numero, maior;

    printf("digite 5 numeros:\n");
    while (contador < 5) {
        printf("igite o numero %d: ", contador + 1);
        scanf("%f", &numero);

        if (contador == 0) {
            maior = numero;
        } else if (numero > maior) {
            maior = numero;
        }

        contador++;
    }
    printf("o maior numero e: %.2f\n", maior);

    return 0;
}
