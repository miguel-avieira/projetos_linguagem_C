#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double c;
    double resultado;
    
    printf("Digite a temperatura em Fahrenheit para converter em Celsius: ");
    scanf("%lf", &c);
    
    resultado = ((c - 32) * 5/9);
    
    printf("A temperatura em Celsius é: %.2lf", resultado);

    return 0;
}