#include <stdio.h>
int main() {
    int numero, i, primo = 1;
    printf("digite um nimero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        primo = 0;
    }

    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            primo = 0;
        }
    }

    if (primo) {
        printf("o numero %d e primo.\n", numero);
    } else {
        printf("o numero %d nao e primo.\n", numero);
    }

    return 0;
}
