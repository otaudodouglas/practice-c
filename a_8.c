 #include <stdio.h>
int main() {
    printf("lojas quase dois - Tabela de Preços\n");
    for (int i = 1; i <= 50; i++) {
        float preco = i * 1.99;
        printf("%d - R$ %.2f\n", i, preco);
    }

    return 0;
}
