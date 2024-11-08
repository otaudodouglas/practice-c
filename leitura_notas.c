#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    if (media == 10) {
        printf("aprovado com Distincao\n");
    } else if (media >= 7) {
        printf("aprovado\n");
    } else {
        printf("reprovado\n");
    }

    return 0;
}
