#include <stdio.h>

int main() {
    int eleitores, voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0;
    printf("informe o numero total de eleitores: ");
    scanf("%d", &eleitores);

    for (int i = 1; i <= eleitores; i++) {
        printf("\nEleitor %d, escolha seu candidato:\n", i);
        printf("1 - Candidato 1\n");
        printf("2 - Candidato 2\n");
        printf("3 - Candidato 3\n");
        printf("Digite sua escolha: ");
        scanf("%d", &voto);

        if (voto == 1) {
            candidato1++;
        } else if (voto == 2) {
            candidato2++;
        } else if (voto == 3) {
            candidato3++;
        } else {
            printf("Nao sera contabilizado.\n");
        }
    }

    printf("\nresultado da eleiçao:\n");
    printf("candidato 1: %d votos\n", candidato1);
    printf("candidato 2: %d votos\n", candidato2);
    printf("candidato 3: %d votos\n", candidato3);

    return 0;
}
