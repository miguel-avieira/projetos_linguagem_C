#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float compra, desconto;
    
    printf("Qual o valor da compra? ");
    scanf("%f", &compra);
    
    if(compra <= 100.00){
        printf("O valor da compra é: %.2f - sem desconto", compra);
    }else if(compra > 100.00 && compra <= 500.00){
        desconto = compra - (compra * 0.05);
        printf("Valor original: R$%.2f\n", compra);
        printf("Percentual de desconto: 5%%\n");
        printf("Valor do desconto: R$%.2f\n", compra * 0.05);
        printf("O valor final da compra é: R$%.2f - 5%% de desconto", desconto);
    }else{
        desconto = compra - (compra * 0.10);
        printf("Valor original: R$%.2f\n", compra);
        printf("Percentual de desconto: 10%%\n");
        printf("Valor do desconto: R$%.2f\n", compra * 0.10);
        printf("O valor final da compra é: R$%.2f - 10%% de desconto", desconto);
    }

    return 0;
}