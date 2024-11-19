#include <stdio.h>
int main() {
    float nota;

    printf("digite uma nota (entre 0 e 10): ");
    scanf("%f", &nota);

    while (nota < 0 || nota > 10) {
        printf("nota invalida! digite um valor entre 0 e 10.\n");
        printf("digite uma nota (entre 0 e 10): ");
        scanf("%f", &nota);
    }
    printf("nota valida: %.2f\n", nota);
    return 0;
}