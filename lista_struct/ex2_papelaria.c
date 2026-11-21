#include <stdio.h>

#define MAX 15

typedef struct {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int buscarProduto(Produto p[], int total, int codigo) {
    int i;
    for (i = 0; i < total; i++)
        if (p[i].codigo == codigo) return i;
    return -1;
}

void cadastrarProduto(Produto p[], int *total) {
    int codigo;

    if (*total >= MAX) {
        printf("Limite de %d produtos atingido!\n", MAX);
        return;
    }
    printf("Codigo: ");
    scanf("%d", &codigo);

    if (buscarProduto(p, *total, codigo) != -1) {
        printf("Ja existe um produto com esse codigo!\n");
        return;
    }
    p[*total].codigo = codigo;
    printf("Nome: ");
    scanf(" %49[^\n]", p[*total].nome);
    printf("Preco: ");
    scanf("%f", &p[*total].preco);
    printf("Quantidade em estoque: ");
    scanf("%d", &p[*total].quantidade);
    (*total)++;
    printf("Produto cadastrado!\n");
}

void exibirProduto(Produto p) {
    printf("Codigo: %d | Nome: %s | Preco: R$ %.2f | Estoque: %d\n",
           p.codigo, p.nome, p.preco, p.quantidade);
}

void listarProdutos(Produto p[], int total) {
    int i;
    if (total == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    for (i = 0; i < total; i++)
        exibirProduto(p[i]);
}

void reporEstoque(Produto *p, int qtd) {
    p->quantidade += qtd;
}

int registrarVenda(Produto *p, int qtd) {
    if (qtd > p->quantidade) return 0;
    p->quantidade -= qtd;
    return 1;
}

float valorTotalEstoque(Produto p[], int total) {
    int i;
    float soma = 0;
    for (i = 0; i < total; i++)
        soma += p[i].preco * p[i].quantidade;
    return soma;
}

int produtoMaiorValor(Produto p[], int total) {
    int i, maior = 0;
    for (i = 1; i < total; i++)
        if (p[i].preco * p[i].quantidade > p[maior].preco * p[maior].quantidade)
            maior = i;
    return maior;
}

int main() {
    Produto produtos[MAX];
    int total = 0, opcao, codigo, qtd, pos;

    do {
        printf("\n===== PAPELARIA =====\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Repor estoque\n");
        printf("4 - Registrar venda\n");
        printf("5 - Consultar produto pelo codigo\n");
        printf("6 - Valor total do estoque e produto de maior valor\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto(produtos, &total);
                break;
            case 2:
                listarProdutos(produtos, total);
                break;
            case 3:
                printf("Codigo do produto: ");
                scanf("%d", &codigo);
                pos = buscarProduto(produtos, total, codigo);
                if (pos == -1) {
                    printf("Produto nao encontrado!\n");
                } else {
                    printf("Quantidade a repor: ");
                    scanf("%d", &qtd);
                    if (qtd <= 0) {
                        printf("Quantidade invalida!\n");
                    } else {
                        reporEstoque(&produtos[pos], qtd);
                        printf("Estoque atualizado: %d unidades.\n", produtos[pos].quantidade);
                    }
                }
                break;
            case 4:
                printf("Codigo do produto: ");
                scanf("%d", &codigo);
                pos = buscarProduto(produtos, total, codigo);
                if (pos == -1) {
                    printf("Produto nao encontrado!\n");
                } else {
                    printf("Quantidade vendida: ");
                    scanf("%d", &qtd);
                    if (qtd <= 0) {
                        printf("Quantidade invalida!\n");
                    } else if (registrarVenda(&produtos[pos], qtd)) {
                        printf("Venda registrada! Total: R$ %.2f | Estoque restante: %d\n",
                               qtd * produtos[pos].preco, produtos[pos].quantidade);
                    } else {
                        printf("Venda negada! Estoque disponivel: %d\n", produtos[pos].quantidade);
                    }
                }
                break;
            case 5:
                printf("Codigo do produto: ");
                scanf("%d", &codigo);
                pos = buscarProduto(produtos, total, codigo);
                if (pos == -1) printf("Produto nao encontrado!\n");
                else exibirProduto(produtos[pos]);
                break;
            case 6:
                if (total == 0) {
                    printf("Nenhum produto cadastrado.\n");
                } else {
                    pos = produtoMaiorValor(produtos, total);
                    printf("Valor total do estoque: R$ %.2f\n", valorTotalEstoque(produtos, total));
                    printf("Produto de maior valor em estoque: %s (R$ %.2f)\n",
                           produtos[pos].nome, produtos[pos].preco * produtos[pos].quantidade);
                }
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
