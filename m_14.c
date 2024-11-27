#include <stdio.h>
int main() {
    int a = 0, b = 1, temp;
    printf("serie de fibonacci ate que o valor seja maior que 500:\n");
    for (int i = 0; a <= 500; i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("%d\n", a);

    return 0;
}
