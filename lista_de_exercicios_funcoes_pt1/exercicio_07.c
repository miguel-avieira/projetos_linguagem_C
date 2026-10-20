#include <stdio.h>

#define N_CLIENTES 500

/* 7. Para cada 15 filmes retirados, o cliente ganha 1 locacao gratis */
void locacoesGratis(int A[], int gratis[], int n) {
    for (int i = 0; i < n; i++)
        gratis[i] = A[i] / 15;   /* divisao inteira */
}

int main(void) {
    int A[N_CLIENTES], gratis[N_CLIENTES];

    printf("Digite a quantidade de filmes retirados por cada um dos %d clientes:\n", N_CLIENTES);
    for (int i = 0; i < N_CLIENTES; i++) {
        printf("Cliente %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    locacoesGratis(A, gratis, N_CLIENTES);

    printf("\nLocacoes gratuitas por cliente:\n");
    for (int i = 0; i < N_CLIENTES; i++)
        printf("Cliente %d: %d\n", i + 1, gratis[i]);

    return 0;
}
