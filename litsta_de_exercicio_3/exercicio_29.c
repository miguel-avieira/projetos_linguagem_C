#include <stdio.h>

int main() {
    int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != 1234) {
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (senha != 1234);

    printf("Acesso autorizado.\n");

    return 0;
}
