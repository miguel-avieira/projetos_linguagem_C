#include <stdio.h>
#include <math.h>

/* 6. Opcoes de pagamento de uma loja */

/* Imprime as opcoes, solicita e retorna a opcao escolhida */
char menuPagamento(void) {
    char op;
    printf("\nOpcoes de pagamento:\n");
    printf("a) A vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preco da etiqueta)\n");
    printf("c) De 3 ate 10 vezes com 3%% de juros ao mes (compras acima de R$ 100,00)\n");
    printf("Escolha: ");
    scanf(" %c", &op);
    return op;
}

void pagamentoAVista(double total) {
    printf("Total a vista: R$ %.2f\n", total * 0.90);
}

void pagamentoDuasVezes(double total) {
    printf("2 parcelas de R$ %.2f (total R$ %.2f)\n", total / 2, total);
}

void pagamentoParcelado(double total) {
    int n;

    if (total <= 100.0) {
        printf("Opcao disponivel somente para compras acima de R$ 100,00.\n");
        return;
    }
    do {
        printf("Numero de parcelas (3 a 10): ");
        scanf("%d", &n);
    } while (n < 3 || n > 10);

    double totalComJuros = total * pow(1.03, n);   /* juros compostos de 3% ao mes */
    printf("%d parcelas de R$ %.2f (total R$ %.2f)\n", n, totalComJuros / n, totalComJuros);
}

int main(void) {
    double total;
    printf("Total gasto pelo cliente: R$ ");
    scanf("%lf", &total);

    char op = menuPagamento();

    switch (op) {
        case 'a': case 'A': pagamentoAVista(total);    break;
        case 'b': case 'B': pagamentoDuasVezes(total); break;
        case 'c': case 'C': pagamentoParcelado(total); break;
        default: printf("Opcao invalida!\n");
    }
    return 0;
}
