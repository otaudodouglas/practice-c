#include <stdio.h>
int main() {
    char nome[10], senha[10];
    int invalido = 0;
        printf("digite o nome de usuario: ");
        scanf("%s", nome);
        printf("digite a senha: ");
        scanf("%s", senha);
        
        while (invalido == 0) {
        }  if (nome == '\0' && senha == '\0') {
            printf("a senha nao pode ser igual ao nome de usuario. Tente novamente.\n");
        } else {
            printf("nome de usuario e senha validos!\n");
        }
    

    return 0;
}