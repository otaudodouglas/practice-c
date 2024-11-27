#include <stdio.h>
int main() {
    int n, t1 = 1, t2 = 1, termos;
    printf("Digite o número de termos: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("Fibonacci: 1\n");
    } else {
        printf("Fibonacci: %d, %d", t1, t2);
        for (int i = 3; i <= n; i++) {
            termos = t1 + t2;
            printf(", %d", termos);
            t1 = t2;
            t2 = termos;
        }
    }
    printf("\n");
    
    return 0;
}
