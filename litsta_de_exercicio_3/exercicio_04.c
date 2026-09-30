#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    float media = (nota1 + nota2 + nota3) / 3;
    
    printf("A sua média é: %.2f", media);

    return 0;
}