#include <stdio.h>

int main() {
    float preco1, preco2, preco3;

    printf("digite o preço do primeiro produto: ");
    scanf("%f", &preco1);
    printf("digite o preço do segundo produto: ");
    scanf("%f", &preco2);
    printf("digite o preço do terceiro produto: ");
    scanf("%f", &preco3);

    if (preco1 < preco2 && preco1 < preco3) {
        printf("coce deve comprar o primeiro produto.\n");
    } else if (preco2 < preco1 && preco2 < preco3) {
        printf("voce deve comprar o segundo produto.\n");
    } else if (preco3 < preco1 && preco3 < preco2) {
        printf("voce deve comprar o terceiro produto.\n");
    } else {
        printf("a dois ou mais produtos com o mesmo menor preço.\n");
    }
    return 0;
}
