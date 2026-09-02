#include <stdlib.h>
#include <stdio.h>

int main(){
    float deposito;
    float taxa;
    
    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);
    
    printf("Digite o valor da taxa de juros: ");
    scanf("%f", &taxa);
    
    float rendimento = deposito * (taxa / 100);
    
    printf("Valor do depósito: %.2f\n", deposito);
    printf("Valor da taxa de juros: %.2f\n", taxa);
    printf("Valor do rendimento: %.2f\n", rendimento);
    
    float soma = deposito + rendimento;
    
    printf("Valor total: %.2f", soma);
    
    return 0;
   
}