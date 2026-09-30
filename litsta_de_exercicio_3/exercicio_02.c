#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    int soma = num1 + num2;
    
    printf("A soma dos dois números é: %d", soma);

    return 0;
}