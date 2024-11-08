#include <stdio.h>
int main() {
    int num1, num2, num3, final;

    printf("digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("digite o segundo numero: ");
    scanf("%d", &num2);
    printf("digite o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 < num2) {
        final = num1;
        num1 = num2;
        num2 = final;
    }
    if (num1 < num3) {
        final = num1;
        num1 = num3;
        num3 = final;
    }
    if (num2 < num3) {
        final = num2;
        num2 = num3;
        num3 = final;
    }
    printf("ordem decrescente: %d, %d, %d\n", num1, num2, num3);
    return 0;
}
