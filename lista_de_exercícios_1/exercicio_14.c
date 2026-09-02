#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nascimento;
    int presente;
    
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &nascimento);
    
    printf("Digite o ano atual: ");
    scanf("%d", &presente);
    
    int idadeA = presente - nascimento;
    int idadeP = 2050 - nascimento;
    
    printf("Ano de nascimento: %d\n", nascimento);
    printf("Ano de atual: %d\n", presente);
    printf("Sua idade atualmente: %d\n", idadeA);
    printf("Sua idade no ano 2050: %d\n", idadeP);
    
    return 0;
}