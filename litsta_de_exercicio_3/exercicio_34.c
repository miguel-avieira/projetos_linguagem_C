#include <stdio.h>
#include <string.h>

int main() {
    char produto[50], nomeMaior[50] = "";
    int quantidade, totalProdutos = 0, numVendas = 0;
    float preco, totalVenda, faturamento = 0, maiorVenda = 0;
    char continuar;

    printf("===== REGISTRO DE VENDAS =====\n");

    do {
        printf("\nNome do produto: ");
        scanf(" %49[^\n]", produto); 
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        printf("Preco unitario: R$ ");
        scanf("%f", &preco);

        totalVenda = quantidade * preco;
        printf("Total desta venda: R$ %.2f\n", totalVenda);

        numVendas++;
        totalProdutos = totalProdutos + quantidade;
        faturamento = faturamento + totalVenda;

        if (totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
            strcpy(nomeMaior, produto);
        }

        printf("Registrar outra venda? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("\n===== RESUMO DO DIA =====\n");
    printf("Vendas realizadas: %d\n", numVendas);
    printf("Total de produtos vendidos: %d\n", totalProdutos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda: R$ %.2f (%s)\n", maiorVenda, nomeMaior);

    return 0;
}
