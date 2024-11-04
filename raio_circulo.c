#include <stdio.h>

int main() {
    float raio, area;
    const float pi = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("A area do circulo e: %.2f\n", area);

    return 0;
}