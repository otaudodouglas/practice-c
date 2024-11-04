#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido. Por favor, digite M ou F.\n");
        return 1;
    }

    printf("Seu peso ideal é de aproximadamente %.2f kg.\n", peso_ideal);

    return 0;
}
