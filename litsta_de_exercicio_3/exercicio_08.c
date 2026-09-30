#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double h;
    double valor_hora;
    double resultado;
    
    printf("Digite quantas horas você trabalhou: ");
    scanf("%lf", &h);
    printf("Digite o valo pago por hora trabalhada: ");
    scanf("%lf", &valor_hora);
    
    resultado = h * valor_hora;
    
    printf("O seu salário bruto é: %.2lf", resultado);

    return 0;
}