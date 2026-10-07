#include <stdio.h>
#include <stdlib.h>

int main()
{
	int codigo[20], i, j, codigoBusca, posicao, encontrou;
	char nome[20][50];
	float preco[20];
	int quantidade[20];
	int total = 0;


	int opcao;

	do {
		printf("1 - Cadastrar");
		printf("\n2 - Consultar");
		printf("\n3 - Listar");
		printf("\n4 - Alterar");
		printf("\n5 - Excluir");
		printf("\n0 - Sair");

		printf("\nEscolha uma opção: ");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1:
			if (total < 20) {
				printf("Digite o código do produto: ");
				scanf("%d", &codigoBusca);


				encontrou = 0;
				for (i = 0; i < total; i++) {
					if (codigo[i] == codigoBusca) {
						encontrou = 1;
					}
				}

				if (encontrou == 1) {
					printf("Não existe um produto com esse código.\n\n");
				} else {
					codigo[total] = codigoBusca;
					printf("Digite o nome do produto: ");
					scanf("%s", nome[total]);
					printf("Digite o preço do produto: ");
					scanf("%f", &preco[total]);
					printf("Digite a quantidade do produto: ");
					scanf("%d", &quantidade[total]);
					total++;

					system("cls");
					printf("Produto cadastrado com sucesso!\n\n");
				}
			} else {
				printf("Limite máximo de cadastros atingido.\n\n");
			}
			break;

		case 2:
			printf("Digite o código que deseja consultar: ");
			scanf("%d", &codigoBusca);
			system("cls");

			encontrou = 0;
			for ( i = 0; i < total; i++) {
				if (codigo[i] == codigoBusca) {
					printf("\nCodigo: %d", codigo[i]);
					printf("\nNome: %s", nome[i]);
					printf("\nPreco: %.2f", preco[i]);
					printf("\nQuantidade: %d\n", quantidade[i]);
					encontrou = 1;
				}
			}

			if (encontrou == 0) {
				printf("Registro não encontrado.\n\n");
			}
			break;

		case 3:
			if (total == 0) {
				printf("Nenhum registro cadastrado.\n\n");
			} else {
				for ( i = 0; i < total; i++) {
					printf("\nCodigo: %d", codigo[i]);
					printf("\nNome: %s", nome[i]);
					printf("\nPreco: %.2f", preco[i]);
					printf("\nQuantidade: %d\n", quantidade[i]);

				}
			}
			break;

		case 4:
			printf("Digite o código do produto que deseja alterar: ");
			scanf("%d", &codigoBusca);

			encontrou = 0;
			for ( i = 0; i < total; i++) {
				if (codigo[i] == codigoBusca) {
					printf("Digite o novo codigo: ");
					scanf("%d", &codigo[i]);
					printf("Digite o novo nome: ");
					scanf("%s", nome[i]);
					printf("Digite o novo preco: ");
					scanf("%f", &preco[i]);
					printf("Digite a nova quantidade: ");
					scanf("%d", &quantidade[i]);

					system("cls");
					printf("Cadastro alterado com sucesso\n\n");
					encontrou = 1;
				}

			}
			if (encontrou == 0) {
				printf("Registro não encontrado.\n\n");
			}

			break;

		case 5:
			printf("Digite o codigo que deseja excluir: ");
			scanf("%d", &codigoBusca);

			posicao = -1;
			for (i = 0; i < total; i++) {
				if (codigo[i] == codigoBusca) {
					posicao = i;
				}
			}

			if (posicao == -1) {
				printf("Não foi possivel excluir.\n\n");
			} else {
				for (i = posicao; i < total - 1; i++) {
					codigo[i] = codigo[i + 1];

					j = 0;
					while (nome[i + 1][j] != '\0') {
						nome[i][j] = nome[i + 1][j];
						j++;
					}
					nome[i][j] = '\0';

					preco[i] = preco[i + 1];
					quantidade[i] = quantidade[i + 1];
				}
				total--;
				printf("Registro excluido.\n\n");
			}
			break;

		case 0:
			printf("Encerrando o programa.\n\n");
			break;

		default:
			printf("Opção invalida.\n\n");
		}

	} while (opcao != 0);

	return 0;
}
