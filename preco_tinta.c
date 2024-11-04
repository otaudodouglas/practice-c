#include <stdio.h>

int main() {
    float area, litros_necessarios, latas_necessarias, preco_total;

    printf("Digite a área a ser pintada em metros quadrados: ");
    scanf("%f", &area);

    litros_necessarios = area / 3;

    latas_necessarias = litros_necessarios / 18;
    if (litros_necessarios / 18 - latas_necessarias > 0) {
        latas_necessarias++;
    }

    preco_total = latas_necessarias * 80;

    printf("Você precisará de %.0f latas de tinta.\n", latas_necessarias);
    printf("O preço total será de R$ %.2f\n", preco_total);

    return 0;
}