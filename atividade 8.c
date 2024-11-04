#include <stdio.h>

int main() {
    float valorHora, horasTrabalhadas, salarioTotal;

    printf("Digite o valor que você ganha por hora: ");
    scanf("%f", &valorHora);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horasTrabalhadas);

    salarioTotal = valorHora * horasTrabalhadas;

    printf("O seu salário total no mês é: R$ %.2f\n", salarioTotal);

    return 0;
}