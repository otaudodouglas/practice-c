#include <stdio.h>

int main() {
    int n, fatorial = 1;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        printf("digite um numero inteiro entre 0 e 16 para calcular o fatorial: ");
        scanf("%d", &n);
    if (n < 0 || n >= 16) {
        printf("insira um numero entre 0 e 16.\n");
    } else {
        for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

         printf("O fatorial de %d é %d\n", n, fatorial);
    }
        printf("deseja calcular o fatorial de outro numero (s para sim, qualquer outra tecla para nao): ");
        scanf(" %c", &continuar);
    }

    return 0;
}
