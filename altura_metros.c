#include <stdio.h>

int main() {
    float altura, peso_ideal;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    peso_ideal = (72.7 * altura) - 58;

    printf("Seu peso ideal é de aproximadamente %.2f kg.\n", peso_ideal);

    return 0;
}