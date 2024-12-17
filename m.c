#include <stdio.h>
int main() {
    char nome[50];
    int idade = -1;
    float salario = -1;
    char sexo = '\0';
    char estado_civil = '\0';
    int i, tamanho;

    printf("digite o nome maior que 3 caracteres: ");
    scanf("%s", nome);
    for (tamanho = 0; nome[tamanho] != '\0'; tamanho++);
    while (tamanho <= 3) {
        printf("nome invaldo: digite novamente maior que 3 caracteres: ");
        scanf("%s", nome);
        for (tamanho = 0; nome[tamanho] != '\0'; tamanho++);
    }
    printf("digite a idade entre 0 e 150: ");
    scanf("%d", &idade);
    while (idade < 0 || idade > 150) {
        printf("idadr invalida: digite novamente entre 0 e 150: ");
        scanf("%d", &idade);
    }
    printf("digite o salario maior que 0: ");
    scanf("%f", &salario);
    while (salario <= 0) {
        printf("salario invalido: digite novamente maior que 0: ");
        scanf("%f", &salario);
    }
    while (getchar() != '\n');
    printf("digite o sexo 'f' para feminino ou 'm' para masculino: ");
    scanf(" %c", &sexo);
    while (sexo != 'f' && sexo != 'm') {
        printf("ssexo invalido. digite novamente 'f' ou 'm': ");
        scanf(" %c", &sexo);
    }
    printf("digite o estdo  civil 's' para solteiro, 'c' para casado, 'v' para viúv, 'd' para divorciado): ");
    scanf(" %c", &estado_civil);;
    while (estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v' && estado_civil != 'd') {
        printf("estado civil invalido: digite novamente 's', 'c', 'v', 'd': ");
        scanf(" %c", &estado_civil);
    }
    printf("\nInformacoes validadas:\n");
    printf("dome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("salario: %.2f\n", salario);
    printf("sexo: %c\n", sexo);
    printf("estado civil: %c\n", estado_civil);
    return 0;
}
