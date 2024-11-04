#include <stdio.h>

int main() {
    const float PESO_LIMITE = 50.0;
    const float VALOR_MULTA_POR_QUILO = 4.0;
    float peso, excesso, multa;

    printf("Digite o peso total de peixes capturados (em kg): ");
    scanf("%f", &peso);

    excesso = peso > PESO_LIMITE ? peso - PESO_LIMITE : 0;

    multa = excesso * VALOR_MULTA_POR_QUILO;

    printf("Peso excedente: %.2f kg\n", excesso);
    printf("Valor da multa: R$ %.2f\n", multa);

    return 0;
}