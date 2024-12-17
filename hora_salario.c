#include <stdio.h>

int main() {
    float valorHora, horasTrabalhadas, salario;
    printf("digite o valor que voce ganha por hora: ");
    scanf("%f", &valorHora);

    printf("digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horasTrabalhadas);
    
    salario = valorHora * horasTrabalhadas;
    printf("seu salário no mes e: R$ %.2f\n", salario);

    return 0;
}