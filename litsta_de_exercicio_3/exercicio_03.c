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
    int sub = num1 - num2;
    int multi = num1 * num2;
    int divi = num1 / num2;
    
    printf("A soma dos dois números é: %d\n", soma);
    printf("A subtração dos dois números é: %d\n", sub);
    printf("A multiplicação dos dois números é: %d\n", multi);
    printf("A divisão dos dois números é: %d\n", divi);

    return 0;
}