#include <stdio.h>

int main() {
    double sociedade1, sociedade2, crescimento1, crescimento2;
    int repetir = 1;

    while (repetir == 1) {
        printf("informe a populaçso da sociedade1: ");
        scanf("%lf", &sociedade1);
        while (sociedade1 <= 0) {
            printf("populaçao invAlida! digite novamente: ");
            scanf("%lf", &sociedade1);
        }
        printf("Informe a taxa de crescimento anual da sociedade1 (em %%): ");
        scanf("%lf", &crescimento1);
        while (crescimento1 <= 0) {
            printf("taxa invalida! digite o valor navament: ");
            scanf("%lf", &crescimento1);
        }
        crescimento1 /= 100;
        printf("nforme a populaçao inicial da sociedade2: ");
        scanf("%lf", &sociedade2);
        while (sociedade2 <= 0 || sociedade2 <= sociedade1) {
            printf("populaçao invalida! digite um valo difetente que a sociedade1: ");
            scanf("%lf", &sociedade2);
        }
        printf("informe a taxa de crescimento anual da sociedade2 (em %%): ");
        scanf("%lf", &crescimento2);
        while (crescimento2 <= 0) {
            printf("taxa invalida! digite um valor maior que zero: ");
            scanf("%lf", &crescimento2);
        }
        crescimento2 /= 100;
        int anos = 0;
        while (sociedade1 < sociedade2) {
            sociedade1 += sociedade1 * crescimento1;
            sociedade2 += sociedade2 * crescimento2;
            anos++;
        }
        printf("derá necessario %d anos para que a populaçao da sociedade1 ultrapasse ou iguale a da sociedade2.\n", anos);
        printf("Deseja repetir a operação? Digite 1 para Sim ou 0 para Não: ");
        scanf("%d", &repetir);
        while (repetir != 0 && repetir != 1) {
            printf("opçao invalida! Digite 1 para Sim ou 0 para Não: ");
            scanf("%d", &repetir);
        }
    }

    return 0;
}
