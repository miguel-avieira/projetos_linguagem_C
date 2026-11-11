#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1 - CADASTRAR
void cadastrar(int codigo[], char nome[][15], int *total) {
    int codigoBusca, i, encontrou;

    // Verificar se o cadastro esta cheio
    if (*total == 5) {
        printf("Limite maximo de cadastros atingido.\n\n");
        return;
    }

    // Ler o codigo
    printf("Digite o codigo: ");
    scanf("%d", &codigoBusca);
    getchar();

    // Verificar se o codigo ja existe
    encontrou = 0;
    for (i = 0; i < *total; i++) {
        if (codigo[i] == codigoBusca) {
            encontrou = 1;
            break;
        }
    }

    if (encontrou == 1) {
        printf("Cadastro ja existe com esse codigo!\n");
    } else {
        codigo[*total] = codigoBusca;

        // Ler o nome
        printf("Digite o nome: ");
        fgets(nome[*total], 15, stdin);
        nome[*total][strcspn(nome[*total], "\n")] = '\0';

        // Atualizar o total de registros
        (*total)++;

        system("cls");
        printf("Cadastro realizado com sucesso!\n\n");
    }
}

// 2 - CONSULTAR
void consultar(int codigo[], char nome[][15], int total) {
    int busca, i, encontrou;

    // Solicitar o codigo para consulta
    printf("Digite o codigo que deseja consultar: ");
    scanf("%d", &busca);
    getchar();

    system("cls");

    // Percorrer o vetor procurando o codigo
    encontrou = 0;
    for (i = 0; i < total; i++) {
        if (codigo[i] == busca) {
            // Mostrar o codigo e o nome, se encontrado
            printf("\nCodigo: %d", codigo[i]);
            printf("\nNome: %s\n", nome[i]);
            encontrou = 1;
            break;
        }
    }

    // Informar se nao foi encontrado
    if (encontrou == 0) {
        printf("Registro nao encontrado.\n\n");
    }
}

// 3 - LISTAR
void listar(int codigo[], char nome[][15], int total) {
    int i;

    if (total == 0) {
        printf("Nenhum registro cadastrado.\n\n");
    } else {
        // Percorrer os registros cadastrados
        for (i = 0; i < total; i++) {
            // Mostrar o codigo e o nome de cada registro
            printf("\nCodigo: %d", codigo[i]);
            printf("\nNome: %s\n", nome[i]);
        }
    }
}

// 4 - ALTERAR
void alterar(int codigo[], char nome[][15], int total) {
    int busca, i, encontrou;

    // Solicitar o codigo que sera alterado
    printf("Digite o codigo que deseja alterar: ");
    scanf("%d", &busca);
    getchar();

    // Procurar o codigo no vetor
    encontrou = 0;
    for (i = 0; i < total; i++) {
        if (codigo[i] == busca) {
            // Ler o novo codigo e o novo nome
            printf("Digite o novo codigo: ");
            scanf("%d", &codigo[i]);
            getchar();

            printf("Digite o novo nome: ");
            fgets(nome[i], 15, stdin);
            nome[i][strcspn(nome[i], "\n")] = '\0';

            system("cls");
            printf("Cadastro alterado com sucesso!\n\n");

            encontrou = 1;
            break;
        }
    }

    // Informar se nao foi encontrado
    if (encontrou == 0) {
        printf("Registro nao encontrado.\n\n");
    }
}

// 5 - EXCLUIR
void excluir(int codigo[], char nome[][15], int *total) {
    int busca, i, j, posicao;

    // Solicitar o codigo que sera excluido
    printf("Digite o codigo que deseja excluir: ");
    scanf("%d", &busca);
    getchar();

    // Procurar o registro no vetor
    posicao = -1;
    for (i = 0; i < *total; i++) {
        if (codigo[i] == busca) {
            posicao = i;
            break;
        }
    }

    if (posicao == -1) {
        printf("Nao foi possivel excluir. Registro nao encontrado.\n\n");
    } else {
        // Deslocar os registros seguintes uma posicao para a esquerda
        for (j = posicao; j < *total - 1; j++) {
            codigo[j] = codigo[j + 1];
            strcpy(nome[j], nome[j + 1]);
        }

        // Diminuir o total de registros
        (*total)--;

        printf("Registro excluido com sucesso!\n\n");
    }
}

// PROGRAMA PRINCIPAL
int main(void) {
    int codigo[5];
    char nome[5][15];
    int total = 0;
    int opcao;

    printf("===== Bem-Vindo! =====\n");

    do {
        printf("\n\n===== MENU =====");
        printf("\n1 - Cadastrar");
        printf("\n2 - Consultar");
        printf("\n3 - Listar");
        printf("\n4 - Alterar");
        printf("\n5 - Excluir");
        printf("\n0 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                cadastrar(codigo, nome, &total);
                break;
            case 2:
                consultar(codigo, nome, total);
                break;
            case 3:
                listar(codigo, nome, total);
                break;
            case 4:
                alterar(codigo, nome, total);
                break;
            case 5:
                excluir(codigo, nome, &total);
                break;
            case 0:
                printf("\nEncerrando...\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
