#include <stdio.h>

int main() {
    float metros, centimetros;
    printf("Digite a medida em metros: ");
    scanf("%f", &metros);
    centimetros = metros * 100;
    printf("%.2f metros equivalem a %.2f centímetros.\n", metros, centimetros);

    return 0;
}

