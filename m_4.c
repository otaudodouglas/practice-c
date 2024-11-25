#include <stdio.h>
int main() {
    int num = 1;
    printf("numeros de 1 a 20 um abaixo do outro:\n");
    while (num <= 20) {
        printf("%d\n", num);
        num++;
    }

    num = 1;
    printf("mumeros de 1 a 20 um ao lado do outro:\n");
    while (num <= 20) {
        printf("%d ", num);
        num++;
    }
    return 0;
}
