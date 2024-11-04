#include <stdio.h>

int main() {
    float valorHora, horasTrabalhadas, salarioBruto, inss, sindicato, ir, salarioLiquido;

    printf("Digite o valor da sua hora trabalhada: R$ ");
    scanf("%f", &valorHora);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horasTrabalhadas);

    salarioBruto = valorHora * horasTrabalhadas;

    inss = salarioBruto * 0.08;
    sindicato = salarioBruto * 0.05;
    ir = salarioBruto * 0.11;

    salarioLiquido = salarioBruto - inss - sindicato - ir;

    printf("\nRelatório Salarial\n");
    printf("Salário Bruto: R$ %.2f\n", salarioBruto);
    printf("- IR (11%%): R$ %.2f\n", ir);
    printf("- INSS (8%%): R$ %.2f\n", inss);
    printf("- Sindicato (5%%): R$ %.2f\n", sindicato);
    printf("= Salário Líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}