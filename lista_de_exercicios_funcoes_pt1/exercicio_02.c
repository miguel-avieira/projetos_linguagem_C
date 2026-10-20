#include <stdio.h>

/* 2. Recebe um numero de 1 a 12 e imprime o mes e a quantidade de dias */
void imprimeMes(int n) {
    const char *meses[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho",
                           "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    const int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (n < 1 || n > 12) {
        printf("Numero invalido! Digite de 1 a 12.\n");
        return;
    }
    printf("%s - %d dias", meses[n - 1], dias[n - 1]);
    if (n == 2) printf(" (29 em ano bissexto)");
    printf("\n");
}

int main(void) {
    int n;
    printf("Digite o numero do mes (1-12): ");
    scanf("%d", &n);
    imprimeMes(n);
    return 0;
}
