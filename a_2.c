#include <stdio.h>
int main() {
    int numero, i, primo = 1;
    printf("digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero <= 1) {
        primo = 0;
    }


    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            if (primo == 1) {
                printf("o numero %d nao e primo  e divisível por:", numero);
            }
            primo = 0;
            printf(" %d", i);
        }
    }

    
    if (primo) {
        printf("o numero %d e primo.\n", numero);
    } else {
        printf("\n");
    }

    return 0;
}