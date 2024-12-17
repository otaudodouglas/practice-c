#include <stdbool.h>
#include <stdio.h>

int main() {
  int numero_de_funcionarios = 0;
  int soma_do_salario = 0;
  int menor_salario = 10000;
  int maior_salario = 0;
  int salario_base = 0;
  int hora_extra = 0;
  int soma_das_horas = 0;
  int soma_geral = 0;
  int media_dos_salarios = 0;
  bool repetir = true;
  while (repetir == true) {
    printf("digite o numero de funcionarios (entre 1 e 50)\n");
    scanf("%d", &numero_de_funcionarios);

    while (numero_de_funcionarios < 1 || numero_de_funcionarios > 50) {
      printf("digite o numero de funcionarios (entre 1 e 50)\n");
      scanf("%d", &numero_de_funcionarios);
    }

    for (int i = 0; numero_de_funcionarios > i; i++) {
      printf("o valor do hpora_extra -> %d\n", hora_extra);
      printf("salario do funcionario %d :", i + 1);
      scanf("%d", &salario_base);
      printf("hora extra do funcionario %d :", i + 1);
      scanf("%d", &hora_extra);
      soma_do_salario = soma_do_salario + salario_base;
      soma_das_horas = soma_das_horas + hora_extra * 50;
      soma_geral = soma_do_salario + soma_das_horas;
      if (salario_base > maior_salario) {
        maior_salario = salario_base;
      }
      if (salario_base < menor_salario) {
        menor_salario = salario_base;
      }
    }
    media_dos_salarios = soma_geral / numero_de_funcionarios;
    printf("soma dos salarios %d\n", soma_do_salario);
    printf("soma da hora extra %d\n", soma_das_horas);
    printf("soma geral dos salarios %d\n", soma_geral);
    printf("maior salario entre os funcionarios %d\n", maior_salario);
    printf("menor salario entre os funcionarios %d\n", menor_salario);
    printf("media dos salarios %d", media_dos_salarios);

    int posso_repetir = 1;
    printf("\n\nse quiser excutar i cidigo novamente digite 1 ou se voce "
           "quiser encrrar o cidigo digite 0");
    scanf("%d", &posso_repetir);

    if (posso_repetir == 0) {
      repetir = false;
    } else {
      numero_de_funcionarios = 0;
      soma_do_salario = 0;
      menor_salario = 10000;
      maior_salario = 0;
      salario_base = 0;
      hora_extra = 0;
      soma_das_horas = 0;
      soma_geral = 0;
      media_dos_salarios = 0;
    }
  }
  return 0;

}