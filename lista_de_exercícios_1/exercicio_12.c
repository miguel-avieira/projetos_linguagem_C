#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double numero1;
    double numero2;
    
    printf("======Contas=====\n");
    printf("Digite o primeiro número da conta: ");
    scanf("%lf", &numero1);
    
    printf("Digite o valor do expoente da conta: ");
    scanf("%lf", &numero2);
    
    double quadrado = pow(numero1, numero2);
    
    printf("Primeiro número: %.2lf\n", numero1);
    printf("Valor do expoente: %.2lf\n", numero2);
    printf("Primeiro número: %.2lf\n", quadrado);
    
    return 0;
}
