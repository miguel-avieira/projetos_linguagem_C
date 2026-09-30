#include <stdio.h>

int main() {
    float numero, maior;
    int i;

    printf("Digite o numero 1: ");
    scanf("%f", &maior); 

    for (i = 2; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("\nMaior numero informado: %.2f\n", maior);

    return 0;
}
