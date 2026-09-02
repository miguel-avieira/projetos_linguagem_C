#include <stdlib.h>
#include <stdio.h>

int main(){
    float base;
    float altura;
    
    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &base);
    
    printf("Digite o valor da altura do triângulo: ");
    scanf("%f", &altura);
    
    float area = (base * altura) / 2;
    
    printf("Valor da base: %.1f\n", base);
    printf("Valor da altura: %.1f\n", altura);
    printf("Valor da área: %.1f\n", area);
    
    return 0;
   
}