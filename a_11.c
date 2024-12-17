#include <stdio.h>
int main() {
    float temperatura, soma = 0, maior, menor;
    int contador = 0;
    printf("digite as temperaturas (digite -999 para encerrar):\n");

    while (1) {
        printf("Temperatura %d: ", contador + 1);
        scanf("%f", &temperatura);
        if (temperatura == -999) {
        }

        if (contador == 0) {
            maior = menor = temperatura;
        } else {
            if (temperatura > maior) {
                maior = temperatura;
            }
            if (temperatura < menor) {
                menor = temperatura;
            }
        }

        soma += temperatura;
        contador++;
    }
    if (contador > 0) {
        float media = soma / contador;
        printf("\nresultados:\n");
        printf("maior temperatura: %.2f\n", maior);
        printf("menor temperatura: %.2f\n", menor);
        printf("media das temperaturas: %.2f\n", media);
    } else {
        printf("nenhuma temperatura foi informada.\n");
    }

    return 0;
}
