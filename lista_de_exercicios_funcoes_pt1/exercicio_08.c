#include <stdio.h>

#define TAM 10

/* 8. Trocas na matriz A(10,10) (os indices em C comecam em 0) */
void trocaMatriz(int A[TAM][TAM]) {
    int tmp;

    /* linha 2 com linha 8 (indices 1 e 7) */
    for (int j = 0; j < TAM; j++) {
        tmp = A[1][j]; A[1][j] = A[7][j]; A[7][j] = tmp;
    }

    /* coluna 4 com coluna 10 (indices 3 e 9) */
    for (int i = 0; i < TAM; i++) {
        tmp = A[i][3]; A[i][3] = A[i][9]; A[i][9] = tmp;
    }

    /* diagonal principal com a secundaria */
    for (int i = 0; i < TAM; i++) {
        tmp = A[i][i]; A[i][i] = A[i][TAM - 1 - i]; A[i][TAM - 1 - i] = tmp;
    }

    /* linha 5 com coluna 10 (indices 4 e 9).
       Usa copias para nao sobrescrever valores antes de trocar.
       A celula de cruzamento A[4][9] fica com o valor vindo da coluna. */
    int linha[TAM], coluna[TAM];
    for (int k = 0; k < TAM; k++) {
        linha[k]  = A[4][k];
        coluna[k] = A[k][9];
    }
    for (int k = 0; k < TAM; k++) A[4][k] = coluna[k];
    for (int k = 0; k < TAM; k++) if (k != 4) A[k][9] = linha[k];
}

void imprimeMatriz(int A[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) printf("%4d", A[i][j]);
        printf("\n");
    }
}

int main(void) {
    int A[TAM][TAM];

    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            A[i][j] = i * 10 + j;   /* valores de teste */

    printf("Matriz original:\n");
    imprimeMatriz(A);

    trocaMatriz(A);

    printf("\nMatriz alterada:\n");
    imprimeMatriz(A);
    return 0;
}
