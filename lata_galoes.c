#include <stdio.h>

int main() {
    float area, litros_necessarios, latas, galoes, custo_latas, custo_galoes, custo_total;

    printf("Digite a área a ser pintada em metros quadrados: ");
    scanf("%f", &area);

    litros_necessarios = (area / 6) * 1.1;

    latas = litros_necessarios / 18;
    if (litros_necessarios - latas * 18 > 0) {
        latas++;
    }
    custo_latas = latas * 80;

    galoes = litros_necessarios / 3.6;
    if (litros_necessarios - galoes * 3.6 > 0) {
        galoes++;
    }
    custo_galoes = galoes * 25;

    int latas_combinacao = (int)(litros_necessarios / 18);
    float sobra = litros_necessarios - latas_combinacao * 18;
    int galoes_combinacao = (int)(sobra / 3.6);
    if (sobra - galoes_combinacao * 3.6 > 0) {
        galoes_combinacao++;
    }
    custo_total = latas_combinacao * 80 + galoes_combinacao * 25;

    printf("\nOpções de compra:\n");
    printf("A. Apenas latas de 18L:\n");
    printf("   Quantidade: %.0f latas\n", latas);
    printf("   Custo total: R$ %.2f\n", custo_latas);

    printf("\nB. Apenas galões de 3.6L:\n");
    printf("   Quantidade: %.0f galões\n", galoes);
    printf("   Custo total: R$ %.2f\n", custo_galoes);

    printf("\nC. Combinação de latas e galões (menor desperdício):\n");
    printf("   Quantidade: %.0f latas e %.0f galões\n", latas_combinacao, galoes_combinacao);
    printf("   Custo total: R$ %.2f\n", custo_total);

    return 0;
}