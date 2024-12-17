#include<stdio.h>
int main(){
    float celsius, fahrenheit;

    printf("digite uma temperatura em graus celcius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f graus celsius equivalem a %.2f gruas fahrenheit.\n", celsius, fahrenheit);
    return 0;
}https://github.com/otaudodouglas/practice-c.git
git remote add origin https://github.com/otaudodouglas/practice-c.git