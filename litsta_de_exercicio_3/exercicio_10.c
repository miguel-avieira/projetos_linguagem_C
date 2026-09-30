#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    char produto[100];
    int quantidade;
    float preco_final, valor;
    
    printf("Digite o nome do produto: ");
    scanf("%s", &produto);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Digite o valor unitário do item: ");
    scanf("%f", &valor);
    
    preco_final = quantidade * valor;
    
    printf("O valor total da compra é: %.2f", preco_final);

    return 0;
}