#include <stdio.h>

int main() {
    float tamanho_arquivo, velocidade_internet, tempo_segundos, tempo_minutos;

    printf("Digite o tamanho do arquivo (em MB): ");
    scanf("%f", &tamanho_arquivo);

    printf("Digite a velocidade da internet (em Mbps): ");
    scanf("%f", &velocidade_internet); 

    velocidade_internet /= 8;

    tempo_segundos = tamanho_arquivo / velocidade_internet;

    tempo_minutos = tempo_segundos / 60;

    printf("O tempo aproximado de download é de %.2f minutos.\n", tempo_minutos);

    return 0;
}