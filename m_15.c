#include <stdio.h>

int main() {
    int n, fatorial = 1;
    printf("digite um numero inteiro: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("nao existe fatorial para numeros negativos.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("o fatorial de %d é %d\n", n, fatorial);
    }

    return 0;
}
