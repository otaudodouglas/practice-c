#include <stdio.h>

int main() {
    double raio, area;
    const double pi = 3.14159;

    printf("digite o raio do círculo: ");
    scanf("%lf", &raio);

    area = pi * raio * raio;
    printf("a área do círculo e: %.2lf\n", area);

    return 0;
}