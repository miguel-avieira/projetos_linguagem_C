#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 3.14159;
    double raio;
    double expo = 2;
    double resultado;
    
    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);
    
    resultado = pow(raio, expo) * pi;
    
    printf("A area do círculo é: %.2lf", resultado);

    return 0;
}