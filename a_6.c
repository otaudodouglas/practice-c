#include <stdio.h>

int main() {
    int numTurmas, i, alunos, totalAlunos = 0;
    float media;
    printf("digite o numero de turmas: ");
    scanf("%d", &numTurmas);

    if (numTurmas <= 0) {
        printf("o número de turmas deve ser maior que zero.\n");
        return 1;
    }
    for (i = 1; i <= numTurmas; i++) {
        do {
            printf("digite o numero de alunos na turma %d (máximo 40): ", i);
            scanf("%d", &alunos);

            if (alunos < 0 || alunos > 40) {
                printf("digiye um valor entre 0 e 40.\n");
            }
        } while (alunos < 0 || alunos > 40);

        totalAlunos += alunos;
    }
    media = (float)totalAlunos / numTurmas;
    printf("a media de alunos por turma e: %.2f\n", media);

    return 0;
}
