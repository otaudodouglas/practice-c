#include <stdio.h>

int main() {
    char sexo;

    printf("digite uma letra (F para feminino, M para masculino): ");
    scanf(" %c", &sexo);

    if (sexo == 'F' || sexo == 'f') {
        printf("feminino\n");
    } else if (sexo == 'M' || sexo == 'm') {
        printf("masculino\n");
    } else {
        printf("sexo invalido\n");
    }
    return 0;
}
