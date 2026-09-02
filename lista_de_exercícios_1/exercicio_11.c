#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double expoente2 = 2;
    double expoente3 = 3;
    double numero;
    
    printf("Digite um número positivo e maior que 0: ");
    scanf("%lf", &numero);
    
    double quadrado = pow(numero, expoente2);
    double cubo = pow(numero, expoente3);
    double raiz2 = sqrt(numero);
    double raiz3 = cbrt(numero);
    
    printf("Número digitado: %.2lf\n", numero);
    printf("Número elevado ao quadrado: %.2lf\n", quadrado);
    printf("Número elevado ao cubo: %.2lf\n", cubo);
    printf("Raiz quadrada do número: %.2lf\n", raiz2);
    printf("Raiz cúbica do número: %.2lf\n", raiz3);
    
    return 0;
}
