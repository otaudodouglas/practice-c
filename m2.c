#include <stdio.h>
int main() {
    double sociedade1 = 80000;
    double sociedade2 = 200000;
    double crecimento1 = 0.03;
    double crecimento2 = 0.015; 

    int anos = 0;
    while (sociedade1 < sociedade2) {
    sociedade1 += sociedade1 * crecimento1;
    sociedade2 += sociedade2 * crecimento2;
     anos++;
    }
    printf("sera necessario %d anos para que a populacao do país 1 ultrapasse ou iguale a populaçao do país .\n", anos);
    return 0;
}
