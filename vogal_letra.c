#include <stdio.h>

int main() {
    char letra;

    printf("digite uma letra: ");
    scanf(" %c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("vogal\n");
    } 

    else if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        printf("consoante\n");
    } 
    else {
        printf("caractere invalido\n");
    }
    return 0;
}
