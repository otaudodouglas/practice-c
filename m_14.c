#include <stdio.h>
int main() {
    int a = 0, b = 1, c, limite;
    printf("digite um valor limite para a sequencia de Fibonacci: ");
    scanf("%d", &limite);
    printf("serie de Fibonacci atr que o valor seja maior que %d:\n", limite);
    printf("%d %d ", a, b);

    for (c = a + b; c <= limite; c = a + b) {
        printf("%d ", c);
        a = b;
        b = c;
    }
    c = a + b;
    printf("%d\n", c);

    return 0;
}
