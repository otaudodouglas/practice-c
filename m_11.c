#include <stdio.h>
int main() {
    int base, expoente, resultado = 1;
    printf("digite a base: ");
    scanf("%d", &base);

    printf("digite o expoente: ");
    scanf("%d", &expoente);
    if (expoente < 0) {
        printf("este programa nao suporta expoentes negativos.\n");
    } else {
        for (int i = 0; i < expoente; i++) {
            resultado *= base;
        }
        printf("%d elevado a %d é igual a %d\n", base, expoente, resultado);
    }
    return 0;
}
