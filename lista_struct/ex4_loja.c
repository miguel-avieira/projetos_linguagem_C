#include <stdio.h>

#define MAX_PROD 10
#define MAX_VENDAS 20

typedef struct {
    int codigo;
    char nome[50];
    float preco;
    int estoque;
} Produto;

typedef struct {
    Produto produto;
    int quantidade;
    float valorTotal;
} Venda;

int buscarProduto(Produto p[], int total, int codigo) {
    int i;
    for (i = 0; i < total; i++)
        if (p[i].codigo == codigo) return i;
    return -1;
}

void cadastrarProduto(Produto p[], int *total) {
    int codigo;

    if (*total >= MAX_PROD) {
        printf("Limite de %d produtos atingido!\n", MAX_PROD);
        return;
    }
    printf("Codigo: ");
    scanf("%d", &codigo);
    if (buscarProduto(p, *total, codigo) != -1) {
        printf("Codigo ja cadastrado!\n");
        return;
    }
    p[*total].codigo = codigo;
    printf("Nome: ");
    scanf(" %49[^\n]", p[*total].nome);
    printf("Preco: ");
    scanf("%f", &p[*total].preco);
    printf("Estoque inicial: ");
    scanf("%d", &p[*total].estoque);
    (*total)++;
    printf("Produto cadastrado!\n");
}

void registrarVenda(Produto p[], int totalProd, Venda v[], int *totalVendas) {
    int codigo, qtd, pos;

    if (*totalVendas >= MAX_VENDAS) {
        printf("Limite de %d vendas atingido!\n", MAX_VENDAS);
        return;
    }
    if (totalProd == 0) {
        printf("Cadastre um produto antes de vender.\n");
        return;
    }

    printf("Codigo do produto: ");
    scanf("%d", &codigo);
    pos = buscarProduto(p, totalProd, codigo);
    if (pos == -1) {
        printf("Produto nao cadastrado!\n");
        return;
    }

    printf("Quantidade vendida: ");
    scanf("%d", &qtd);
    if (qtd <= 0 || qtd > p[pos].estoque) {
        printf("Quantidade invalida! Estoque disponivel: %d\n", p[pos].estoque);
        return;
    }

    v[*totalVendas].produto = p[pos];
    v[*totalVendas].quantidade = qtd;
    v[*totalVendas].valorTotal = qtd * p[pos].preco;
    p[pos].estoque -= qtd;
    printf("Venda registrada! Total: R$ %.2f\n", v[*totalVendas].valorTotal);
    (*totalVendas)++;
}

void listarProdutos(Produto p[], int total) {
    int i;
    if (total == 0) printf("Nenhum produto cadastrado.\n");
    for (i = 0; i < total; i++)
        printf("Codigo: %d | %s | R$ %.2f | Estoque: %d\n",
               p[i].codigo, p[i].nome, p[i].preco, p[i].estoque);
}

void listarVendas(Venda v[], int total) {
    int i;
    if (total == 0) printf("Nenhuma venda registrada.\n");
    for (i = 0; i < total; i++)
        printf("Venda %d: %s | Qtd: %d | Total: R$ %.2f\n",
               i + 1, v[i].produto.nome, v[i].quantidade, v[i].valorTotal);
}

float faturamentoTotal(Venda v[], int total) {
    int i;
    float soma = 0;
    for (i = 0; i < total; i++)
        soma += v[i].valorTotal;
    return soma;
}

float faturamentoProduto(Venda v[], int totalVendas, int codigo) {
    int i;
    float soma = 0;
    for (i = 0; i < totalVendas; i++)
        if (v[i].produto.codigo == codigo)
            soma += v[i].valorTotal;
    return soma;
}

void relatorio(Produto p[], int totalProd, Venda v[], int totalVendas) {
    int i, iMaior = 0;
    float fat, maior = 0;

    if (totalVendas == 0) {
        printf("Nenhuma venda registrada.\n");
        return;
    }
    for (i = 0; i < totalProd; i++) {
        fat = faturamentoProduto(v, totalVendas, p[i].codigo);
        if (fat > maior) {
            maior = fat;
            iMaior = i;
        }
    }
    printf("Faturamento total: R$ %.2f\n", faturamentoTotal(v, totalVendas));
    printf("Produto de maior faturamento: %s (R$ %.2f)\n", p[iMaior].nome, maior);
}

int main() {
    Produto produtos[MAX_PROD];
    Venda vendas[MAX_VENDAS];
    int totalProd = 0, totalVendas = 0, opcao;

    do {
        printf("\n===== CONTROLE DE VENDAS =====\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Registrar venda\n");
        printf("4 - Listar vendas\n");
        printf("5 - Faturamento total e produto de maior faturamento\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarProduto(produtos, &totalProd); break;
            case 2: listarProdutos(produtos, totalProd); break;
            case 3: registrarVenda(produtos, totalProd, vendas, &totalVendas); break;
            case 4: listarVendas(vendas, totalVendas); break;
            case 5: relatorio(produtos, totalProd, vendas, totalVendas); break;
            case 0: printf("Encerrando...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
