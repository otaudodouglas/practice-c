#include <stdio.h>
int main() {
    float preco, total, dinheiro, troco;
    int continuar = 1;

    while (continuar) {
        total = 0;
        printf("\nlojas do Sr. Manoel Joaquim\n");
        while (1) {
            printf("digite o preco do item (ou 0 para finalizar): R$ ");
            scanf("%f", &preco);

            if (preco == 0) {
                break;
            }

            if (preco < 0) {
                printf("preco invalido! tente novamente.\n");
            }

            total += preco;
        }

        printf("\nTotal da compra: R$ %.2f\n", total);

        printf("Digite o valor recebido: R$ ");
        scanf("%f", &dinheiro);

        if (dinheiro < total) {
            printf("dinheiro insuficiente! operacao cancelada.\n");
        } else {
            troco = dinheiro - total;
            printf("troco: R$ %.2f\n", troco);
        }

        printf("\ndeseja registrar outra compra? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);
    }

    printf("\ncaixa finalizada!\n");

    return 0;
}
