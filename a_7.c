#include <stdio.h>
int main() {
    int quantidade, i;
    float valor, total = 0, media;
    printf("informe a quantidade de CDs da coleção: ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        printf("Informe o valor do CD %d: R$ ", i);
        scanf("%f", &valor);
        total += valor;
    }
    if (quantidade > 0) {
        media = total / quantidade;
        printf("\nvalor total investido: R$ %.2f\n", total);
        printf("valor medio por CD: R$ %.2f\n", media);
    } else {
        printf("\na quantidade de CDs deve ser maior que zero.\n");
    }

    return 0;
}
