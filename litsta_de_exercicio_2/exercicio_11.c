#include <stdio.h>
#include <math.h>
int main() {
    float valor_produto;
    int pagamento;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);
    
    printf("Escolha a forma de pagamento: \n");
    printf("1 - À vista em dinheiro ou cheque - 10%% de desconto.\n");
    printf("2 - À vista no cartão de crédito - 15%% de desconto.\n");
    printf("3 - Em duas parcelas: preço normal, sem juros.\n");
    printf("4 - Em três parcelas: acréscimo de 10%% sobre o preço normal.\n");
    printf("Digite o número realcionado:");
    scanf("%d", &pagamento);
    
    if(pagamento == 1){
        float desconto = valor_produto * 0.10;
        float preco_final = valor_produto - desconto;
        printf("Opção escolhida: À vista em dinheiro ou cheque.\n");
        printf("Preço final do produto: %.2f", preco_final);
    }else if(pagamento == 2){
        float desconto = valor_produto * 0.15;
        float preco_final = valor_produto - desconto;
        printf("Opção escolhida: À vista no catão de crédito.\n");
        printf("Preço final do produto: %.2f", preco_final);
    }else if(pagamento == 3){
        printf("Opção escolhida: Em duas parcelas.\n");
        printf("Preço final do produto: %.2f", valor_produto);
    }else if(pagamento == 4){
        float juros = valor_produto * 0.10;
        float preco_final = valor_produto + juros;
        printf("Opção escolhida: Em três parcelas.\n");
        printf("Valor final do produto: %.2f", preco_final);
    }
    
    
    return 0;
}