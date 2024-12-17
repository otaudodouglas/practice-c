#include <stdio.h>
int main() {
    char turno;

    printf("em que turno voce estuda? (M - matutino, V - vespertino, N - noturno): ");
    scanf(" %c", &turno);

    if (turno == 'M' x/* 
     */ turno == 'm') {
        printf("bom dia!\n");
    } else if (turno == 'V' || turno == 'v') {
        printf("boa tarde!\n");
    } else if (turno == 'N' || turno == 'n') {
        printf("boa noite!\n");
    } else {
        printf("valor invalido!\n");
    }
    return 0;
}
