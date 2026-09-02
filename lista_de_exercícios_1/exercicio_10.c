#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 3.14;
    double expoente = 2;
    double raio;
    
    printf("Digite o valor do raio(r) do círculo: ");
    scanf("%lf", &raio);
    
    double conta = pow(raio, expoente);
    double resultado = conta * pi;
    
    printf("O valor total da área é: %.2lf", resultado);
    
    return 0;
}
