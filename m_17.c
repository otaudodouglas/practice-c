#include <stdio.h>

int main() {
    int n, num, menor, maior, soma = 0;

    printf("digite a quantidade de numeros: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("a quantidade de numeros deve ser maior que 0.\n");
    }
    printf("digite o primeiro numero: ");
    scanf("%d", &num);

    if (num < 0 || num > 1000) {
        printf("número invalido. o numero deve estar entre 0 e 1000.\n");

    }

    menor = maior = num;
    soma = num;
    for (int i = 1; i < n; i++) {
        printf("digite o próximo numero: ");
        scanf("%d", &num);
        while (num < 0 || num > 1000) {
            printf("número inválido. o numero deve estar entre 0 e 1000.\n");
            printf("digite o próximo número: ");
            scanf("%d", &num);
        }

        if (num < menor) {
            menor = num;
        }
        if (num > maior) {
            maior = num;
        }
        soma += num;
    }

    printf("msenor valor: %d\n", menor);
    printf("maior valor: %d\n", maior);
    printf("soma dos valores: %d\n", soma);

    return 0;
}
