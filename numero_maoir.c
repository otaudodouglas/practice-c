#include<stdio.h>
int main(){
    int nu1, nu2, maoir;

    printf("digiye um numero: ");
    scanf("%d", &nu1);
    printf("digite um numero: ");
    scanf("%d", &nu2);

    if (nu1 > nu2){
        maoir = nu1;
    }else{
        maoir = nu2;
    }
    printf("o maoir numero e: %d\n", maoir);
    return 0;
}