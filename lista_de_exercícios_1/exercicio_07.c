#include <stdlib.h>
#include <stdio.h>

int main(){
    float salario = 1823.50;
    float bonus = 50.00;
    
    printf("========Nota de pagamento========\n");
    printf("Valor atual do salário: %.2f\n", salario);
    printf("Valor da gratificação: %.2f\n", bonus);
    
    float soma = salario + bonus;
    
    printf("Valor do salário a receber: %.2f\n", soma);
    
    float imposto = salario * 0.10;
    float salario_total = (salario + bonus) - imposto;
    
    printf("Valor do salário com imposto incluso: %.2f", salario_total);
    
    return 0;
   
}