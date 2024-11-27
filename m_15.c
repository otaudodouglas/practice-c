#include <stdio.h>
int main() {
    int num, i;
    int fatorial = 1;
    printf("digite um numero inteiro nao negativo: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("fatorial nao é definido para numeros negativos.\n");
    } else if (num == 0 || num == 1) {
        printf("o fatorial de %d é 1.\n", num);
    } else {
        for (i = 2; i <= num; ++i) {
            fatorial *= i;
     }
        printf("o fatorial de %d é %d.\n", num, fatorial);
    }

    return 0;
}
