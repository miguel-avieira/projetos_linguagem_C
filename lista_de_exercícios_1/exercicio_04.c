#include <stdlib.h>
#include <stdio.h>

int main()
{
    float salario = 1823.50;
    
    printf("=============Nota de pagamento============\n");
    printf("Parabéns você recebeu um aumento de 25%% no seu salário\n");
    
    float aumento = salario * 0.25;
    float novo_salario = salario + aumento;
    
    printf("Salário anterior: %.2f\n", salario);
    printf("Novo valor do salário: %.2f", novo_salario);

    return 0;
}