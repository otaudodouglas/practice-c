#include <stdio.h>

int main() {
    float lado, area, areaDobrada;
    printf("Digite um lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    areaDobrada = area * 2;
    printf("a area dobrada do quadrado e: %.2f\n", areaDobrada);

    return 0;
}