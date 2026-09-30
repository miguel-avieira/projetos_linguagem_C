#include <stdio.h>

int main() {
    float saldo = 1000.00;   
    float valor;
    int opcao;

    printf("Bem-vindo ao caixa eletronico!\n");
    printf("Saldo inicial: R$ %.2f\n", saldo);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("Valor do deposito: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo = saldo + valor;
                    printf("Deposito realizado. Saldo atual: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido! O deposito deve ser maior que zero.\n");
                }
                break;

            case 3:
                printf("Valor do saque: R$ ");
                scanf("%f", &valor);
                if (valor <= 0) {
                    printf("Valor invalido! O saque deve ser maior que zero.\n");
                } else if (valor > saldo) {
                    printf("Saldo insuficiente! Saldo atual: R$ %.2f\n", saldo);
                } else {
                    saldo = saldo - valor;
                    printf("Saque realizado. Saldo atual: R$ %.2f\n", saldo);
                }
                break;

            case 4:
                printf("Encerrando... Obrigado por utilizar o caixa eletronico!\n");
                break;

            default:
                printf("Opcao invalida! Escolha de 1 a 4.\n");
        }
    } while (opcao != 4);

    return 0;
}
