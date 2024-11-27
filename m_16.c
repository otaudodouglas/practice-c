#include <stdio.h>
int main() {
    int n, num, menor, maior, soma = 0;
    printf("digite a quantidade de numeros: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("a quantidade de numeros deve ser maior que 0.\n");
    }
    printf("Digite o primeiro numero: ");
    scanf("%d", &num);

    menor = maior = num;
    soma = num;
    for (int i = 1; i < n; i++) {
        printf("Digite o próximo numero: ");
        scanf("%d", &num);
    if (num < menor) {
        menor = num;
    }
    if (num > maior) {
         maior = num;
    }
         soma += num;
    }
    printf("menor valor: %d\n", menor);
    printf("maior valor: %d\n", maior);
    printf("soma dos valores: %d\n", soma);

    return 0;
}
