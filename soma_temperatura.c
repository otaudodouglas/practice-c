#include<stdio.h>
int main(){
    float fahrenheit, celsius;

    printf("digite a temperatura em fahrenheit");
    scanf("%f", &fahrenheit);

    celsius = 5 * ((fahrenheit - 32) / 9);
    printf("%.2F graus equivalem a %.2f graus celcius. \n", fahrenheit, celsius);
    return 0; 
}