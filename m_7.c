#include <stdio.h>
int main() {
    printf("numeros ímpares entre 1 e 50:\n");

    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
