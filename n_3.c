#include <stdio.h>
int main() {
    int n, i;
    float nota, soma = 0, media;

    printf("digite o numero de notas: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("o numero de notas deve ser maior que zero.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        if (nota < 0 || nota > 10) {
            printf("digite uma nota entre 0 e 10.\n");
            i--;
        }
        soma += nota;
    }
    media = soma / n;
    printf("a media aritmetica das %d notas e: %.2f\n", n, media);

    return 0;
}
