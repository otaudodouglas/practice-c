#include <stdio.h>
int main() {
    int n, termo1 = 1, termo2 = 1, proximo;
    printf("digite o numero de termos da série de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("insira um numero maior que zero.\n");
        return 1;
    }
    printf("serie de Fibonacci com %d termos:\n", n);
    if (n == 1) {
        printf("%d\n", termo1);
    } else {
        printf("%d, %d", termo1, termo2);
        for (int i = 3; i <= n; i++) {
            proximo = termo1 + termo2;
            printf(", %d", proximo);
            termo1 = termo2;
            termo2 = proximo;
        }
        printf("\n");
    }
    return 0;
}
