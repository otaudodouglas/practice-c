#include <stdio.h>

int main() {
    float lado, area, dobroArea;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    dobroArea = 2 * area;
    
    printf("O dobro da área do quadrado é: %.2f\n", dobroArea);

    return 0;
}