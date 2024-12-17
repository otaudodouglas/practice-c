#include <stdio.h>
int main() {
    int n, i, idade, soma = 0;
    float media;
    printf("digite o número de pessoas na turma: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        soma += idade;
    }

    media = soma / (float)n;

    if (media <= 25) {
        printf("a turma e jovem.\n");
    } else if (media <= 60) {
        printf("a turma e adulta.\n");
    } else {
        printf("a turma r idosa.\n");
    }

    return 0;
}
