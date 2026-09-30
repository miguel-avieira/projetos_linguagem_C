#include <stdio.h>

int main() {
    int A[6];
    int i;

    for (i = 0; i < 6; i++) {
        do {
            printf("Digite o valor par %d: ", i + 1);
            scanf("%d", &A[i]);

            if (A[i] % 2 != 0) {
                printf("Numero impar! Digite um numero par.\n");
            }
        } while (A[i] % 2 != 0);
    }

    printf("\nValores na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d\n", A[i]);
    }

    return 0;
}