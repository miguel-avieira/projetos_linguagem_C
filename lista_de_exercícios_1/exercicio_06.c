#include <stdlib.h>
#include <stdio.h>

int main()
{
    float salario = 1823.50;
    
    printf("=============Nota de pagamento============\n");
    printf("Salário base: %.2f\n", salario);
    
    float bonus = salario * 0.05;
    float bonus_total = salario + bonus;
    
    printf("Valor da gratificação: %.2f\n", bonus);
    
    float imposto = bonus_total * 0.07;
    float salario_total = bonus_total - imposto;
    
    printf("Valor do imposto: %.2f\n", imposto);
    printf("Valor total do salário: %.2f", salario_total);
    
    return 0;
}