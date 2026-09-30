#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double distancia;
    double combustivel;
    double resultado;
    
    printf("Digite a distancia percorrida em quilômetros: ");
    scanf("%lf", &distancia);
    printf("Digite a quantidade de combustível utilizada em litros: ");
    scanf("%lf", &combustivel);
    
    resultado = distancia / combustivel;
    
    printf("O consumo médio é de: %.2lf", resultado);

    return 0;
}