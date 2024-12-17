#include <stdio.h>

int main() {
    float preco_pao;
    printf("digite o preco do pao: R$ ");
    scanf("%f", &preco_pao);

    printf("\npanificadora pao de ontem - tabela de Preços\n");
    for (int i = 1; i <= 50; i++) {
        printf("%d - R$ %.2f\n", i, i * preco_pao);
    }

    return 0;
}
