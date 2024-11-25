#include <stdio.h>
int main() {
    int contador = 0;
    float numero, soma = 0, media;

    printf("digite 5 numeros:\n");

    while (contador < 5) {
        printf("digite o numero %d: ", contador + 1);
        scanf("%f", &numero);

        soma += numero;
        contador++;
    }
    media = soma / 5;
    printf("a soma dos numeros e: %.2f\n", soma);
    printf("a media dos numeros e: %.2f\n", media);

    return 0;
}
