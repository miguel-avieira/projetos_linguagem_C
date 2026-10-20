#include <stdio.h>

#define LIN 61
#define COL 10

/* 9. Soma cada coluna (linhas 1 a 60) e guarda o resultado na 61a linha */
void somaColunas(int M[LIN][COL]) {
    for (int j = 0; j < COL; j++) {
        M[LIN - 1][j] = 0;
        for (int i = 0; i < LIN - 1; i++)
            M[LIN - 1][j] += M[i][j];
    }
}

int main(void) {
    static int M[LIN][COL];

    for (int i = 0; i < LIN - 1; i++)
        for (int j = 0; j < COL; j++)
            M[i][j] = i + j;   /* valores de teste */

    somaColunas(M);

    printf("Soma de cada coluna (61a linha):\n");
    for (int j = 0; j < COL; j++)
        printf("Coluna %d: %d\n", j + 1, M[LIN - 1][j]);
    return 0;
}
